#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a = n % 2;
    n = n / 2;

    int b = n % 2;
    n = n / 2;

    int c = n % 2;
    n = n / 2;

    int d = n % 2;
    n = n / 2;

    //cout << d << c << b << a << endl;
    //cout << 8 * d  + 4 * c + 2 * b + a << endl;

    //cout << a << b << c << d << endl;
    cout << 8 * a  + 4 * b + 2 * c + d << endl;

    return 0;
}