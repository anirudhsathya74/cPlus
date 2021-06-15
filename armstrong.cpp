#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n=153;
    int m=n;
    int result=0;
    while (n != 0) {
       // remainder contains the last digit
        int remainder = n % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       n /= 10;
    }

    if(m==result)
    cout<<"\n Is armstrong";
    else
    cout<<"\n Not armstrong";
     
    return 0;
}    