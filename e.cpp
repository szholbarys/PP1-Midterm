#include<iostream>
using namespace std;

int main(){
    double n, m;
    cin >> n >> m;
    double k = m*100/n;
        if(k > 80){
            cout << "YES";
        }else{
            cout << "NO";
        }
    return 0;
}