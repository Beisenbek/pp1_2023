#include <iostream>

using namespace std;

int f(int n, int res){
   if(n == 0) return res;
   return f(n - 1, res + n);
}

int main(){

    int n;
    cin >> n;
    cout << f(n, 0);
    return 0;
}