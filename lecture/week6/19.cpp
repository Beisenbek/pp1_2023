#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;

    ss << "123 ";
    ss << "456";

    cout << ss.str();
    
    return 0;
}