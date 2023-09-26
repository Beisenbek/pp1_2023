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
        swap(a[i], a[j]);
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }


    return 0;
}
