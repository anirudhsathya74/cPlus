#include<iostream>
using namespace std;

bool pyt(int x, int y, int z){
    int a,b,c;
    a= max(x,max(y,z));
    
    if(a == x){
        b=y;
        c=z;
    }
    else if (a == y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if (a*a == b*b + c*c){
        cout<<"\n Is a triplet";
    }
    else
    cout<<"\n Not a triplet";

    return true;
}

int main () {
    int a,b,c=0;
    cin>>a>>b>>c;
    cout<<pyt(a,b,c)<<endl;
    return 0;
}