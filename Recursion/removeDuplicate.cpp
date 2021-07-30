#include<iostream>
using namespace std;

string removedupe(string str){
    if(str.length()==0)
        return "";

    char ch=str[0];
    string ans=removedupe(str.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}

int main() {
    cout<<removedupe("aaaabbbbcccddeeeee");                 //remove consecutive duplicate elements 
    return 0;
}