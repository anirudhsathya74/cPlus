#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=3,m=3;

    int target=9;

    int a[n][m]={{1,2,3},{4,5,6},{7,8,9}};

   int r=0,c=n-1;
   bool found=false;
   
   while(r<m and c>=0){
       if(a[r][c]==target){
           found=true;
       }
       else if(a[r][c]>target){
           c--;
       }
       else{
           r++;           
       }
   }

   if(found)
        cout<<"Ele found";
   else
        cout<<"Ele not found";
   return 0;
}