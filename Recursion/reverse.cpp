#include<iostream>
using namespace std;

void reverse(string str){
    if(str.length()==0){
        return;
    }

    string restOfStr=str.substr(1);
    reverse(restOfStr);
    cout<<str[0];
}

int main() {

    reverse("hanuman");
    return 0;
}