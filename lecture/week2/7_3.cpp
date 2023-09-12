#include <iostream>
#include <cmath>

using namespace std;

int main(){
   
    int a, b, c;
    cin >> a >> b >> c;

    bool st1 = (a < b + c);
    bool st2 = (b < a + c);
    bool st3 = (c < a + b);

    if(st1 && st2 && st3){
        cout << "yes!";
    }else{
        cout << "no!";
    }

    return 0;
}
