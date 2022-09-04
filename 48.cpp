#include<iostream>
#include<string>

using namespace std;

//in this task have words, that contain numbers 
//and,we need...
//output only words,filtered words
int main(){
    string s;
    string temp = "";

    while(cin >> s){
        for(int i = 0;i < s.size();i++){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
                temp += s[i];
            }
        }
        cout << temp << endl;
    }
    return 0;
}