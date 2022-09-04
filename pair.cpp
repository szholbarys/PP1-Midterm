#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<string, pair<string , string> > p[100];
    string ID, name, surname;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> ID >> name >> surname;
        p[i] = make_pair(ID, make_pair(name, surname));
    }
    for(int i = 0;i < n;i++){
    cout << p[i].first << " " << p[i].second.second << endl;
    }
    return 0;
}