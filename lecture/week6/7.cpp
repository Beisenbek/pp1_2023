#include <iostream>

using namespace std;

int main(){

    string str("test");
    string t = "";
    t.append(str, 0, 1);

    cout << t << endl;

    return 0;
}