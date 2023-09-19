#include <iostream>

using namespace std;

int main(){

    int a = 10;

    for(;;){
        if(a <=0 ) break;
        cout << a << " ";
        a = a - 1;
    }

    return 0;
}