//array of vector 
#include<iostream>
#include<vector>

using namespace std;

vector <int> v[100];

int main(){
    int n, m, x;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> m;
        for(int j = 0;j < m;j++){
            cin >> x;
            v[i].push_back(x);
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < v[i].size();j++){
            cout << v[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}