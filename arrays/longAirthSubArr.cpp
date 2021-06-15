#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }    

    int pd=a[1]-a[0],curr=2,maxx=2;          //pd=previous common difference
    int j=2;                                //cuee=current arithmetic subarray length
    while(j<n){
        if(pd == a[j]-a[j-1])
        curr++;
        else{
            pd = a[j]-a[j-1];
            curr=2;
        }
        maxx = max(maxx,curr);
        j++;
    }
    cout<<maxx<<endl;
    return 0;
}