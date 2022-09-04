#include<iostream>
#include<vector>
#include<set>
// set finding
using namespace std;

int main(){
    set<int> st;
    st.insert(23);
    st.insert(13);
    st.insert(43);
    st.insert(53);
    st.insert(13);
    st.insert(43); 

    int x;
    cin >> x;
    if(st.find(x) != st.end()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}