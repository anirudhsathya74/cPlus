#include<iostream>
using namespace std;
// int getbit(int n, int pos){
//     return ((n & (1<<pos))!=0); 
// }

// int setbit(int n, int pos){
//     return (n | (1<<pos));
// }

// int clearbit(int n, int pos){
//     int mask = ~(1<<pos);
//     return (n & mask);
// }

int updatebit(int n, int pos, int updateValue){
    int mask = ~(1<<pos);
    int newn;
    newn= (n & mask);
    return (newn | (updateValue<<pos));
}
int main() {
    int pos=1,n=5;

    // cout<<getbit(n,pos)<<endl;
    // cout<<setbit(n,pos)<<endl;
    // cout<<clearbit(n,pos)<<endl;
    int updateValue;
    cin>>updateValue;
    cout<<updatebit(n,pos,updateValue)<<endl;
    return 0;
}