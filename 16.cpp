#include<iostream>
using namespace std;

int main(){
    int d, m, y;
    cin >> d >> m >> y;
    if(d >= 1 && d <= 31 && m >= 1 && m <= 12 && y >= 1970 && y <= 2035){
        if(d != 29 && d != 30 && d != 31){
            m = 2;
           cout << "YES";
        }else{
            cout << "NO";
        }
    }
    if(d != 31){
        m = 9;
        cout << "NO";
    }
    cout << endl;
    return 0;
}