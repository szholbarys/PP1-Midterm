#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string s, n, l;
    getline(cin, s);
    int k = 0;
    s += '';
    for(int i = 0;i < s.size();i++){
        if(s[i] != ''){
            k++;
            n += s[i];
        }else{
            if(k > 2){
                l += n + '';
            }
            k = 0;
            n = "";
        }
    }
    cout << l;
    return 0;
}
