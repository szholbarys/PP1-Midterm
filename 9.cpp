#include<iostream>
using namespace std;

int main(){

int num, bin[10000], i = 0;
cin >> num;
while(num != 0){
   bin[i] = num % 2;
   ++i;
   num /= 2;
}
    int cnt = 0;
    int cnt1 = 0;
    for(i = (i - 1); i >= 0;i--){
        cout << bin[i];
        if(bin[i] == 0){
            cnt++;
        }else{
            cnt1++;
        }
    }
    cout << endl;
    cout << "zeros" <<" "<< cnt << endl;
    cout << "number of units"<<" "<< cnt1; 
    return 0;
}