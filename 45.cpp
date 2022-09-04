#include <bits/stdc++.h>

// C++ program to see if two strings are mutually anagrams

using namespace std;

//function to check whether two strings are each anagrams

bool areAnagram(string s, string t){
// Get both strings lengths
int n1 = s.length();
int n2 = t.length();
// If both strings are not equal in length, they are not anagram
if(n1 != n2){
    return false;
}
// Filter the strings of both
sort(s.begin(), s.end());
sort(t.begin(), t.end());
for(int i = 0;i < n1;i++){
    if(s[i] != t[i]){
        return false;
        return true;
    }
}
}
//driver code
int main(){
    string s, t;
    cin >> s >> t;
    if(areAnagram(s,t)){
        cout << "Anagram";
    }else{
        cout << "Not anagram";
    }
    return 0;
}