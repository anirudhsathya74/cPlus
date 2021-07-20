#include<iostream>
using namespace std;

int main() {       
    int n=4,count=1;
    for(int i=0;i<n;i++){
        int count=i+1;
        for(int j=n-i;j>=1;j--){
            
            cout<<count++<<" ";
        }
    cout<<endl;
    }
    return 0;
}