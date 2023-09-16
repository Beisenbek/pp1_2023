#include <iostream>

using namespace std;

int main(){

    int k, m, n;

    cin >> k >> m >> n;

    if(n > k){

        int x = (2 * n) / k;
        int r = (2 * n) % k;

        if(r != 0){
            x = x + 1;
        }

        cout << x * m;
    }else{
        cout << 2 * m;
    }
    
    return 0;
}