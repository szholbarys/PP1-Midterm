#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res = 0;
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        res ^= x;
    }
     int f = 1;
     while(f < res){
         f <<= 1;
     }
     if(f == res){
         cout <<"YES";
     }else{
         cout <<"NO";
     }
    return 0;
}