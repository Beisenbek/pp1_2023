#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
   
    int x, y, a, b;

    cin >> x >> y >> a >> b;

    if(x >= a && (x - a) + y >= b && x + y >= a + b) cout << "Yes";
    else cout << "No";
    
    return 0;
}