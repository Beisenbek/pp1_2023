#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;
    if(x == 0){
        cout << "None";
    }else if(x % 2 == 0){
        cout << "Even";
    }else{
        cout << "Odd";
    }
    return 0;
}