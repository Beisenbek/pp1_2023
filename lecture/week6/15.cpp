#include <iostream>

using namespace std;

int main(){

    string s;
    string t;

    cin >> s >> t;

    size_t pos = 0;
    int cnt = 0;

    while(true){
        pos = s.find(t, pos);
        if(pos == string :: npos){
            break;
        }
        cnt++;
        pos = pos + 1;
    }

    cout << cnt;
    
    return 0;
}