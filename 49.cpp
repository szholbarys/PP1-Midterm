#include<iostream>
#include<string>

using namespace std;

//n strings how to find all prefix with "@gmail.com"

int main(){
    int n;
    cin >> n;
    string s;
    for(int i = 0;i < n;i++){
        cin >> s;
        int t = s.find("@gmail.com");
        if(t != string::npos){
            cout << s.substr(0, t) << endl;
        }
    }
    return 0;
}