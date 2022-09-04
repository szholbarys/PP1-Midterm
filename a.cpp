#include<iostream>
using namespace std;

string f(int x){
    string s = "";
    while(x != 0){
        int k = x%2;
        char c = k + 48;
        s = c + s; 
    }
    return s;

}
int main(){
    int n;
    cin >> n;
    string s=f(n);
    for(int i = 0, j = s.size() - 1;j >= 0,i < s.size();i++, j--){
        if(s[i] != s[j]){
            cout << "Sad";
            return 0;
        }
    }
    cout <<"It work.";
    return 0;
}