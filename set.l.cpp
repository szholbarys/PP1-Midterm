#include<iostream>
#include<string>
#include<set>

//letter sorting
//for example :  qwertyuiopasdfghjklzxcvbnm
//               a b c d e f g h i j k l m n o p q r s t u v w x y z

using namespace std;

int main(){
    string s;
    cin >> s;
   set<char> st(s.begin(), s.end());

   set<char> :: iterator it;
   for(it = st.begin(); it != st.end(); it++){
       cout << *it << " ";
    } 
  
    return 0;
}