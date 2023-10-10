#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){


    string s;
    int cnt = 0;
    stringstream ss;

    while(cin >> s){
        ss << s << " ";
    }

    cout << ss.str();
    
    return 0;
}