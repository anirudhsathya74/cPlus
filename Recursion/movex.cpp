#include<iostream>
using namespace std;

string moveallx(string str){
    if(str.length()==0){
        return "";
    }
    char ch=str[0];
    string ans = moveallx(str.substr(1));

    if(ch=='x'){
        return ans+ch;
    }
    return (ch+ans);

}

int main() {

    cout<<moveallx("abxcxfdxf");
    return 0;
}