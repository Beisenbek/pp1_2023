#include <iostream>

using namespace std;


void print(int x){
    x = x * 2;
    cout << x << endl;
}


int main(){
    int y = 3;
    print(y);
    cout << y << endl;
    return 0;
}