#include <iostream>

using namespace std;

char f3(int x){
    string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return str[x];
}

string f(int n, int k, string res){
   if(n == 0) return res;
   return f(n / k, k, f3(n % k) + res);
}

int main(){

    int n, k;
    cin >> n >> k;
    cout << f(n, k, "");

    return 0;
}