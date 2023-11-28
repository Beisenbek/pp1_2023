#include <iostream>
#include <stdlib.h>
using namespace std;

void f(int &a){
    a = a * 2;
}

int main(){

    int a = 2;
    f(a);
    cout << a;
    return 0;
}