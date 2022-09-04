//vector pass to function
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void f(vector<int> &b){
    b[2] = 100;
}

int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(12);
    v.push_back(5);
    v.push_back(2);
    f(v);
    //sort(v.begin(), v.end());
    for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }    
    return 0;
}