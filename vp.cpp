//vector of pair
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector< pair<int, int> > v;
    int n, x, y;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i = 0;i < n;i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}