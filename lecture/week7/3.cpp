#include <iostream>

using namespace std;

int apb(int a, int b){
    return a + b;
}

int asb(int a, int b){
    return a - b;
}

void run(int a, int b){
    cout << apb(a, b) << endl;
    cout << asb(a, b) << endl;
}

int main(){
    int x, y;
    cin >> x >> y;
    run(x, y);
    return 0;
}