#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=3,m=3;

    int target=9;

    int a[n][m]={{1,2,3}
                ,{4,5,6}
                ,{7,8,9}};

   int r=0,c=m-1;
   
   while(r<n and c>=0){
       if(a[r][c]==target){
           cout<<"Found at "<<r<<","<<c<<endl;
           return 1;
       }
       else if(a[r][c]>target){
           c--;
       }
       else{
           r++;           
       }
   }
   return 0;
}