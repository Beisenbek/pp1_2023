#include <iostream>
#include <cmath>
#include <stdlib.h> 
using namespace std;

int main(){

    string s = "121";
    int x = atoi(s.c_str());
    cout << sqrt(x * 1.0);   
    return 0;
}