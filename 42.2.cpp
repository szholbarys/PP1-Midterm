#include<iostream>

using namespace std;

/* transpose matrix:
  first off we write just n*m matrix
    3 3
   1 2 3
   4 5 6
   7 8 9
then output transpose of this matrix
1 4 7
2 5 8
3 6 9
*/

int main(){
    int n, m, i, j;
    cin >> n >> m;
    int a[n][m], b[n][m];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
                b[j][i] = a[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}