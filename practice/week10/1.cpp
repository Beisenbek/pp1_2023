#include <iostream>

using namespace std;

char f3(int x){
    string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return str[x];
}
/*
char f2(int x){
    if(x == 0) return '0';
    if(x == 1) return '1';
    ....
    if(x == 10) return 'A';
    if(x == 11) return 'B';
    ...
    if(x == 15) return 'F';
    ...
    if(x == 35) return 'Z';
    return '1';
}
*/
void f(int n, int k){
    string res = "";
    while(n > 0){
        res = f3(n % k) + res;
        n = n / k;
    }
    cout << res;
}

int main(){

    int n, k;
    cin >> n >> k;
    f(n, k);

    return 0;
}