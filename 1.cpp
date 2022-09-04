#include<iostream>
#include<string>
using namespace std;
// A -> a, ulken aripti kishi aripke ainaldyru
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
           s[i] = s[i] + 32;
        }
        cout << s[i];
    }
     
     return 0;
}