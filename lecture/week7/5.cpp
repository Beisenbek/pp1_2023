#include <iostream>

using namespace std;

int a;

void run(int x){
    cout << a << " " << x;
}


int main(){
    a = 2;
    run(3);
    return 0;
}