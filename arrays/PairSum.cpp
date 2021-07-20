#include <bits/stdc++.h>
using namespace std;

int pairsum(int a[],int n,int k){
    int low=0,high=n-1;
    int currsum=0;
    while(low<=high){
        currsum=a[low]+a[high];
        if(currsum==k){
            cout<<"a["<<low<<"] - "<<a[low]<<endl<<"a["<<high<<"] - "<<a[high]<<endl;
            cout<<"["<<low<<","<<high<<"]";
            return true;
        }
        else if(currsum<k){
            low++;
        }
        else {
            high--;
        }
    }
    return false;
}

int main(){
    int k=6;
    int a[]={2,4,7,11,16,20,21};
    cout<<pairsum(a,8,k)<<endl;
    
    return 0;
}