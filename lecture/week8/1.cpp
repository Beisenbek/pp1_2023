#include <iostream>

using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    cout << a + b;
}

void solve2(int a, int b){
    cout << a + b;
}

int solve3(int a, int b){
    return a + b;
}

int main(){

    solve();

    return 0;
}