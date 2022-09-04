#include<iostream>

using namespace std;

int main(){
    int n, a, d, sum = 0;
    cin >> n >> a >> d;
    int f[n];
    for(int i = 1;i <= n;i++){
        cout << (f[i] = a + (i - 1) * d) << " ";
    }
    cout << endl;

    for(int i = 1;i <= n;i++){
        sum = ((2 * a + (n - 1) * d) * n)/2;
    }
    cout << "sum: " << sum;
    return 0;
}