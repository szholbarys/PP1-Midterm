#include<bits/stdc++.h>

using namespace std;

int main(){
    string dec;
    int rem;
    cin >> dec;

    while(dec > 0){
        rem = dec % 16;
        if(rem > 9){
            switch(rem){
               case 10: cout << "A"; break;
               case 11: cout << "B"; break;
               case 12: cout << "C"; break;
               case 13: cout << "D"; break;
               case 14: cout << "E"; break;
               case 15: cout << "F"; break;
            }
        }else{
            cout << rem;
        }
    }
    return 0;
}