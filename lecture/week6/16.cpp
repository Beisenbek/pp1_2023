#include <iostream>

using namespace std;

int main(){

    string s;
    string t;

    cin >> s >> t;

    int cnt = 0;

    for(size_t i = 0; i <= s.size() - t.size(); ++i){
        if(s.substr(i, t.size()) == t){
            cnt++;
        }
    }

    cout << cnt;

    
    return 0;
}