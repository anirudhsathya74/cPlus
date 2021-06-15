#include<iostream>
using namespace std;

int linearsearch(int n, int a[], int key){
    for(int i =0;i<n;i++){                                           //time complexity is O(n)
        if(a[i]==key)
        return i;
    }
    return -1;
}

int binarysearch(int n, int a[], int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;
        
        if(key==a[mid])                                             //time complexity is O(log(n))
        return mid;

        else if(a[mid]>key)
        e=mid-1;

        else
        s=mid+1;
    }
    return -1;
}

int main() {
    
    int n;
    cin>>n;

    int a[n];
    for(int i = 0;i<n;i++){             
        cin>>a[i];
    }
    int k;
    cin>>k;
    //cout<<linearsearch(n,a,k)<<endl;
    cout<<binarysearch(n,a,k)<<endl;
    
    return 0;
}