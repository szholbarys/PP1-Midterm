#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '1'){
            cout << '1';
        }
    }
    for(int i = 0;i < s.size();i++){
        if(s[i] != '1'){
            cout << s[i];
        }
    }
    return 0;
}