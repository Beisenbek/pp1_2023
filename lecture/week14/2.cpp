#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 0; i <=n ;++i){
        int p = 1;
        for(int j = 1; j <= i; ++j){
            p = p * i;
        }
        cout << p << " ";
    }

    return 0;
}