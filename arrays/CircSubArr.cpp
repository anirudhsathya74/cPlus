#include <bits/stdc++.h>
using namespace std;

int kadene(int a[],int n){
    int currsum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxSum=max(currsum,maxSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadene(a,n);

    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }

    wrapsum=totalsum + kadene(a,n);

    cout<<max(wrapsum,nonwrapsum);

    return 0;
}    