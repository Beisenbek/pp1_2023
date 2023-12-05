#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
long long my_pow(long long i, long long a){
    if(i == 0) return 1;
    return a * my_pow(i - 1, a);
}

long long current_number;

long long g(){
    long long res = my_pow(current_number, current_number);
    current_number++;
    return res;
}

int main(){

    int n;
    cin >> n;
    n = n + 1;

    int a[n];

    current_number = 0;

    generate(a, a + n, g);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }


    return 0;
}