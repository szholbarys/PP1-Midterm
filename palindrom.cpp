#include <iostream>
using namespace std;

int main(){
    int n, num, digit, rev = 0;
    cin >> num;
    n = num;

    do{
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }while(num != 0);
    cout << "The number of the reverse is =" << rev << endl;
    
    if(n == rev){
        cout << "The number is Palindrom";
    }else{
        cout << "The number isn't Palindrom";
    }
    return 0;
}