#include <iostream>

using namespace std;

int main(){

    int a[10];
    int n = 10;

    for(int i = 0 ; i < n; ++i){
        a[i] = i + 1;
    }

    for(int i = 0 ; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}