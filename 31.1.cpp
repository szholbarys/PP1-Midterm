#include<bits/stdc++.h>

using namespace std;


/*
symmetric of number
6
1 2 3 3 2 1
YES
or
8 
1 3 2 4 9 7 5 3
No
*/
int ReverceNumber(int num){
    int res = 0;
    while(num != 0){
        res *= 10;
        res += num % 10;
        num /= 10;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n/2;i++){
        if(a[i] != ReverceNumber(a[n - 1 - i])){
            cout << "NO" << endl;
        }
    }
    cout << "YES" << endl;
    return 0;
}