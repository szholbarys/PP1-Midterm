#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
    string s;
    cin >> s;
    if(equal(s.begin(), s.begin() + s.size()/2, s.rbegin())){
            cout << s << endl;
        }else{
            cout << "NO";
        }
    }
    return 0;
}