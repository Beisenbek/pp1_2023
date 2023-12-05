#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
long long my_pow(long long i, long long a){
    if(i == 0) return 1;
    return a * my_pow(i - 1, a);
}
int main(){

    int n;
    cin >> n;

    for(int i = 0; i <=n ;++i){
        cout << my_pow(i, i) << " ";
    }

    return 0;
}