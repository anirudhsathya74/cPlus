#include<iostream>
using namespace std;

int main() {
    int k=1;
    int n=5;
    for (int i=1;i<=n;i++){
       
            
        for (int j =1; j<=n-i;j++ ){
            cout<<"  ";
        }
        int k;
            k=i;
        for (int j =1; j<=i;j++ ) {            
            cout<<k--<<" ";
        }
        k=2;
        for (int j =1; j<=i-1;j++ ) {

            cout<<k++<<" ";
        }
    cout<<endl;   
    }
}