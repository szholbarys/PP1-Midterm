#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    string s[n];
    for(int i = 0;i < n;i++){
        cin >> s[i];
    }
    string w1 ="";
    string w2 ="";
    for(int j = 0;j < n;j++){
        for(int i = 0;i < s[j].size();i++){
            w1 += s[j][i];
            w2 += s[j][i];
        }
        reverse(w1.begin(), w1.end());
        if(w1 == w2){
            cout << w1 << endl;
            cnt++;
        }
        w1 ="";
        w2 ="";
    }
    if(cnt == 0){
        cout << "NO";
    }
    return 0;
}