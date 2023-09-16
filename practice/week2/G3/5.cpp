#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    if(n == 1 || n % 4 == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}