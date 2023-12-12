#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

string f(int n){
    string result = "";
    
    int a = n / 100;
    int b = (n / 10 ) % 10;
    int c = n % 10;

    if(a == 1) result += "C";

    if(b == 1) result += "X";
    if(b == 2) result += "XX";
    if(b == 3) result += "XXX";
    if(b == 4) result += "XL";
    if(b == 5) result += "L";
    if(b == 6) result += "LX";
    if(b == 7) result += "LXX";
    if(b == 8) result += "LXXX";
    if(b == 9) result += "XC";

    if(c == 1) result += "I";
    if(c == 2) result += "II";
    if(c == 3) result += "III";
    if(c == 4) result += "IV";
    if(c == 5) result += "V";
    if(c == 6) result += "VI";
    if(c == 7) result += "VII";
    if(c == 8) result += "VIII";
    if(c == 9) result += "IX";

    return result;
}

int main(){

    int n;
    cin >> n;
    cout << f(n);

    return 0;
}