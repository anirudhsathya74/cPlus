#include<bits/stdc++.h>
using namespace std;

int first(int n,int a[], int i, int key){
    if(i==n){
        return -1;
    }

    if(a[i]==key){
        return i;
    }
    
    return first(n,a,i+1,key);

}

int last(int n,int a[], int i, int key){
    if(i==n){
        return -1;
    }
    int restArray=last(n,a,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(a[i]==key){
        return i;
    }
    return -1;

}

int main() {
    int a[]={4,2,5,2,8,2,8};

    cout<<first(7,a,0,8)<<endl;
    cout<<last(7,a,0,8);
    return 0;
}