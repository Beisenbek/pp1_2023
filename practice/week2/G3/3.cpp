#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    bool e1 = (n % 2 == 1);
    bool e2 = (n % 2 == 0 && n >= 2 && n <= 5);
    bool e3 = (n % 2 == 0 && n >= 6 && n <= 20);
    bool e4 = (n > 20);

    if(e1 || e3){
        cout << "Super";
    }else if(e2 || e4){
        cout << "Not Super";
    }

    return 0;
}