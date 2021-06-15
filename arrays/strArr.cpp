#include<bits/stdc++.h>
using namespace std;

int32_t main() {

    int n;
    cin>>n;
    cin.ignore();

    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int i=0;                                                //i=9
    int currLen=0,maxLen=0;                                 //c=0 m=3 
    int st=0,maxst=0;                                       //st=10 maxst=6
    while(1){

        if(a[i] == ' ' || a[i] == '\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                maxst=st;
            }
            currLen=0;
            st=i+1;
        }
        else
        currLen++;
        if(a[i] == '\0'){
            break;
        }
        i++;
    }

    cout<<maxLen<<endl;
    for(i=0;i<maxLen;i++){
        cout<<a[i+maxst];
    }
    return 0;
}