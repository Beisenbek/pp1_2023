#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int t = 1;
    int p = n - 1;
    for(int k = 0; k < n; ++k){
        for(int i = 0; i <=p; ++i){
            cout << ' ';
        }
        for(int i = 1; i <= t; ++i){
            cout << '*';
        }
        t += 2;
        p--;
        cout << endl;
    }

    return 0;
}