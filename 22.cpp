#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s;
    getline(cin,s);

    reverse(s.begin(), s.end());

    for(int i = 0;i < s.size();i++){
    if(s[i] >= '0' && s[i] <= '9'){
        cout << s[i];
      }
    }
    return 0;
}