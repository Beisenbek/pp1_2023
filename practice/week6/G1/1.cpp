#include <iostream>

using namespace std;

int main(){

    double x, y;
    cin >> x >> y;
    int cnt = 1;

    for(double s = x; s < y; s += s * 0.1){
        cnt++;
    }

    cout << cnt;

    return 0;
}