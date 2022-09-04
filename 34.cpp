#include<bits/stdc++.h>

using namespace std;

/*
R - stone
S - scissors
P - paper
*/
int main(){
    char a[15];
    char b[15];
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0;i < 15;i++){
        cin >> a[i];
    }
    for(int j = 0;j < 15;j++){
        cin >> b[j];
    }
    for(int g = 0;g < 15;g++){
        if(a[g] == 'R' && b[g] == 'P'){
          cnt2++;
        }
        if(a[g] == 'P' && b[g] == 'R'){
            cnt1++;
        }
        if(a[g] == 'S' && b[g] == 'P'){
            cnt1++;
        }
        if(a[g] == 'P' && b[g] == 'S'){
            cnt2++;
        }
        if(a[g] == 'R' && b[g] == 'S'){
            cnt1++;
        }
        if(a[g] == 'S' && b[g] == 'R'){
            cnt2++;
        }
    }
    if(cnt1 > cnt2){
            cout << "First player wins!" << endl;
        }
        else if(cnt2 > cnt1){
            cout << "Second player wins!" << endl;
        }else{
            cout << "Friendship" << endl;
        }
    return 0;
}