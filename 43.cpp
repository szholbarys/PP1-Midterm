#include <iostream>

using namespace std;

// n - subject, m - number of grades, x- contain grades for each subject
// x = 
/*  5 4
    1 2 3 4 = 1 + 2 + 3 + 4 = 10, 10 / 4 = 2.5 but integer of 2.5 equal to 2;
    1 2 3 4
    2 3 4 5
    2 2 2 2
    5 5 4 5

    output: 2 2 3 2 4
*/

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    int cnt = 0;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            int x;
            cin >> x;
            cnt += x;
        }
        a[i] = cnt/m;
        cnt = 0;
    }    
    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
    return 0;
}