#include<bits/stdc++.h>
using namespace std;

int divisible(int num,int a,int b){
    int c1=num/a;
    int c2=num/b;                                                   //divisible by a and b nut not a*b

    int c3=num/(a*b);

    return c1+c2-c3;
}

int main(){
    int num,a,b;
    cin>>num>>a>>b;

    cout<<divisible(num,a,b);

    return 0;
}