#include <iostream>

using namespace std;

int main(){

    string str("test");
    char t[20];
    str.copy(t, 2, 0);
    t[2] = '\0';
    cout << t << endl;

    return 0;
}