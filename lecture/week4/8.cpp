#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i <= (n - 1) / 2; ++i){
        int j = n - 1 - i;
        int x = a[i];
        a[i] = a[j];
        a[j] = x;
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }


    return 0;
}