#include <iostream>

using namespace std;

int main(){

    string str = "test";

    str.append(10,'+');

    cout << str;

    return 0;
}