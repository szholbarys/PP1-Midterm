#include<iostream>

using namespace std;

// this code was mistake
// correct answer in the other fail like this
int n;
cin >> n;
void TransposeOf(int arr[n][n], int b[n][n]){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            b[i][j] = arr[j][i];
        }
    }
}

int main(){
    int n;
    cin >> n;
    cin >> n;
    int arr[n][n];
    int b[n][n];
    TransposeOf(arr, b);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << b[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}