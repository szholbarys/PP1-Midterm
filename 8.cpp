#include<iostream>
using namespace std;

int main(){
    int n, k, l = 0;
    cin >> n;
    for(int i = 0;i <= n;i++){
        k = i;
        while(k > 0){
            l += ( k % 2);
            k /= 2;
        }
        cout << l;
        l = 0;
    }
    return 0;
}
/*
0 = 0 = 0
1 = 1 = 1
2 = 10 = 1 + 0 = 1
3   = 110 = 1 + 1 + 0 = 2
4 = 100 = 1 + 0 + 0 = 1
5 = 101 = 1 + 0 + 1 = 2
6 = 110 = 1 + 1 + 0 = 2
7 = 111 = 1 + 1 + 1 = 3
8 = 1000 = 1 + 0 + 0 + 0 = 1

8
011212231
*/