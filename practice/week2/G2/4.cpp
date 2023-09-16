#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a, b, c;
    cin >> a >> b >> c;

    double d = b * b - 4 * a * c;
    if(d > 0){
        cout << (-b + sqrt(d)) / (2 * a) << endl;
        cout << (-b - sqrt(d)) / (2 * a) << endl; 
    }else if(d == 0){
        cout << -b / (2 * a);
    }

    return 0;
}