#include<bits/stdc++.h>
using namespace std;

bool CheckYear(int y){
    return y >= 1970 && y <= 2035;
}
bool CheckMonth(int m){
    return m >= 1 && m <= 12;
}
bool CheckDay(int d,int m){
    //           Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return d >= 1 && d <= days[m - 1];  
}
bool CheckDate(int d, int m, int y){
      return CheckYear(y) && CheckMonth(m) && CheckDay(d, m);
}
int main(){
int d, m, y;
cin >> d >> m >> y;
if(CheckDate(d, m, y)){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}
    return 0;
}