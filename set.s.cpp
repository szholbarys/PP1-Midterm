#include<iostream>
#include<vector>
#include<set>
//size of set
using namespace std;

int main(){
    vector<int> v;
    v.push_back(123);
    v.push_back(456);
    v.push_back(789);
    v.push_back(654);

    set<int> s(v.begin(), v.end());
    cout << s.size() ;
    return 0;
}