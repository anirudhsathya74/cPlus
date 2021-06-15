#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 47;
    int i,flag=0;

    for (i=2;i<sqrt(n);i++)
    {
        if (n%i == 0)
        {
            cout<<n<<" is composite";
            flag = 1;
            break;
        }
    }
    if ( flag == 0){
            cout<<n<<" is prime";
        }
    return 0;
}