#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> st;
    st.insert(2);
    st.insert(45);
    st.insert(1234);
    st.insert(45);
    st.insert(3);
    st.insert(87);
    st.insert(3);

    st.erase(87);

    cout << st.size() << endl;

    set<int> :: iterator it;
    for(it = st.begin(); it != st.end();it++){
        cout << *it << " ";
    }
    return 0;
}