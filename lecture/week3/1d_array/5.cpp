#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int b = ++i;
    cout << b << " " << i << endl;

    int j = 1;
    int c = j++;
    cout << c << " " << j;


    return 0;
}