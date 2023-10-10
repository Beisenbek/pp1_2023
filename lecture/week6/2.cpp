#include <iostream>

using namespace std;

int main(){

    string str;
    cin >> str;

    cout << str.length() << endl;

    str += 'i';

    cout << str.length();

    return 0;
}