#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b =temp;
}

int32_t main() {
    
    int a=2;
    int b=9;

    int *aptr = &a;
    int *bptr = &b;
    
    swap(aptr,bptr);

    cout<<a<<"\n"<<b;

    return 0;
}