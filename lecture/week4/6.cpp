#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string str;
    getline(cin, str);
    
    sort(str.begin(), str.end());

    //cout << int(str[0]);
    cout << str;

    return 0;
}