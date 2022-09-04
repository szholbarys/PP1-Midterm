#include <bits/stdc++.h>
using namespace std;

string f(int x)
{
    string s = "";
    while (x != 0)
    {
        int k = x % 2;
        char c = k + 48;
        s = c + s;
        x /= 2;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    string s = f(n);
    for(int i=0; i<=s.size()/2; i++){
        if (s[i] != s[s.size() - 1 - i])
        {
            cout << "Sad";
            return 0;
        }
    }
    cout << "It works!";
    return 0;
}