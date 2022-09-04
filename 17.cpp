#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, d;
    cin >> n >> m >> d;
    int k = n + m;
    if(d >= 0.1*k){
        cout << "Boris, you are punished!" << endl;
    }else{
        cout << "You are my sweet baby" << endl;
    }
    return 0;
}
// n + m = 100%
//     d = 10%