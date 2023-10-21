#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
   
    int a, b, c;
    cin >> a >> b >> c;

    bool is_it_triangle = false;
    bool is_isosceles = false;

    if(a + b > c && a + c > b && b + c > a)
        is_it_triangle = true;

    if(a == b || b == c || a == c)
        is_isosceles = true;

    if(is_it_triangle && is_isosceles)
        cout << "YES";
    else 
        cout << "NO";
    
    return 0;
}