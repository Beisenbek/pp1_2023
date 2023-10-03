#include <iostream>

using namespace std;

int main(){

    int a[100];

    for(int i = 1; i <= 10; ++i){
        cin >> a[i];
    }

    for(int i = 1; i <= 10; ++i){
        cout <<  a[i] << " ";
    }

    return 0;
}