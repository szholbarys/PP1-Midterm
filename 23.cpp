#include<iostream>

using namespace std;

// 2 * a^n = b;
// 2 * 2^n = 32  ->  2^n = 16  ->  YES 4, because 2^4=16;

int main(){
    long long a, b;
    cin >> a >> b;
    int multiplier = 1;
    if(b < a){
        multiplier = -1;
        swap(a,b);
    }
    int power = 0;
    if(b > a && b % 2 == 0){
        b >>= 1;
        ++power;
    }
    if(b == a){
        cout << "YES " << power*multiplier << endl;
    }else{
        cout <<"NO" << endl;
    }  
}