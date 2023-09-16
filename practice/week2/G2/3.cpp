#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n, k, m;

    cin >> k >> m >> n;

    if(k < n){
        int d = (2 * n) / k;
        int r = (2 * n) % k;
        if(r > 0){
            d = d + 1;
        }
        cout << d * m;
    }else{
        cout << 2 * m;
    }

    return 0;
}