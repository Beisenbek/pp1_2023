#include <iostream>

using namespace std;

int main(){

    string s;
    string t;

    cin >> s >> t;

    size_t pos = s.find(t);
    while(pos != string::npos){
        cout << "found!" << endl;
        pos = s.find(t, pos + 1);
    }
    
    return 0;
}