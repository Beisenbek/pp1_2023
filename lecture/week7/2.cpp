#include <iostream>

using namespace std;

int apb(int a, int b){
    return a + b;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << apb(x, y);
    return 0;
}