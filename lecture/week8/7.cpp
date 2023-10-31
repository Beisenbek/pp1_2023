#include <iostream>

using namespace std;

int m[50];

int f(int n){
    if(m[n] == -1){
        m[n] = f(n-1) + f(n-2);
    }
    return m[n];
}

int main(){
    for(int i = 3; i < 50; ++i){
        m[i] = -1;
    }
    m[1] = m[2] = 1;

    int n;
    cin >> n;
    
    cout << f(n);
    return 0;
}