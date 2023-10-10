#include <iostream>

using namespace std;

int main(){

    string str("test");

    string t = str;

    str.push_back('!');

    cout << t << endl;
    cout << str << endl;

    return 0;
}