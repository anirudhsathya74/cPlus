#include <iostream>
using namespace std;

int main() {
    char button;
    cout<<"\n Input a character \n";
    cin>>button;    
    
    switch (button)
    {
    case 'a':
        cout<<"\n Hello";
        break;

    case 'b':
        cout<<"\n hola";
        break;    
    
    case 'c':
        cout<<"\n Nani";
        break;
    default:
        cout<<"\n hi";
        break;
    }
    
    return 0;

}