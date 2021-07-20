#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {       
    int n,a[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            temp[j++]=a[i];
        }
    }
    temp[j] = a[n-1];
    for(int i=0;i<j;i++){
        a[i]=temp[i];
    }
    cout<<"\n";
    for(int i=0;i<j;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}