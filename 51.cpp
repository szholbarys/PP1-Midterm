#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    char ans = s[0], cur = s[0];
    int max = 1, cur_max = 1;
    for(size_t i = 1;i < s.size();++i){
        if(s[i] != cur){
            if(cur_max > cur){
                ans = cur;
                max = cur_max;
            }
            cur_max = 1;
            cur = s[i];
        }else{
            cur_max++;
        }
    }
    if(cur_max > cur){
        ans = cur;
        max = cur_max;
    }
    cout << ans << " " << max << endl;
    return 0;
}