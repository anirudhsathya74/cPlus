#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main() {

    string s1 = "asdfghjkl";
    sort(s1.begin(),s1.end());
    cout<<s1;   
    return 0;
}