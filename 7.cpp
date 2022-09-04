#include<iostream>
using namespace std;

int main(){
    int a, b, n, k;
    cin >> a >> n;
    cin >> b >> k;

    int ath = (a >> n) & 1;
    int bth = (b >> k) & 1;

    if(ath == bth){
        cout << "Thunderclap and Flesh!";
    }else{
        cout << "Thunder Breathing... First form...";
    }
    return 0;
}