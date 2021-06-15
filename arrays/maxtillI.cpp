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
    int maxno=INT_MIN;
    for (int i=0;i<n;i++){
        if(a[i]>maxno)
        maxno=a[i];
    cout<<maxno;
    }
    
    return 0;
}