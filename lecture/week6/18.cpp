#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;

    ss << "123 ";
    ss << "456";

    int x, y;
    ss >> x >> y;

    cout << sqrt(x) << endl;
    cout << sqrt(y);
    
    return 0;
}