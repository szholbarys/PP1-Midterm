#include<iostream>
#include<set>
#include<string>
#include<algorithm>

//sorting words -> letter
using namespace std;

int main(){
    set< set<char> > a;

    int n;
    cin >> n;
    string s;
    for(int i = 0;i < n;i++){
        cin >> s;
        set<char> b(s.begin(), s.end());
        a.insert(b);
    }

    set< set<char> >:: iterator it;
    set<char> :: iterator it1;
    for(it = a.begin();it != a.end();it++){
    for(it1 = (*it).begin();it1 != (*it).end();it1++){
     cout << *it1 << endl;
    }
    }
    return 0;
}