#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
        if(n > 0 && n <= 13){
            cout << "Lark";
        }else if(n >= 13 && n <= 24){
            cout << "Owl";
        }
    return 0;
}