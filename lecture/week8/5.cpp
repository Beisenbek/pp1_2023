#include <iostream>

using namespace std;

int f(int n){
   return ((n + 1) * n )/2;
}

int main(){

    int n;
    cin >> n;
    cout << f(n);
    return 0;
}