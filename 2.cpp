#include<iostream>
#include<cmath>
using namespace std;

string f(int x){
    string s = "";
    while(x != 0){
        int k = x%2;
        char c = k + 48;
        s = c + s;
        x /= 2;
    }
    return s;
}
int f1(string s){
    int sum = 0;
    for(int i = 0; i < s.size();i++){
        if(s[i] == '1'){
            int k = pow(2, i);
            sum += k;
        }
    }
    return sum;
}

int main(){
    int a, b, c;
    cin >>a >> b >> c;
    string s1 = f(b);
    string s2 = f(c);
    char temp = s1[a - 1];
    s1[a - 1] = s2[a - 1];
    s2[a - 1] =  temp;
    int sum1 = f1(s1);
    int sum2 = f1(s2);
    if(sum1 == sum2){
        cout << "Nothing has changed";
    }
   else if(sum1 > sum2){
        cout << "Good deal for the first number";
    }else{
        cout << "Good deal for the second number";
    }
    return 0;
}