#include <iostream>

using namespace std;

int main(){

    string s;
    string t;

    cin >> s >> t;

    int cnt = 0;

    for(size_t i = 0; i <= s.size() - t.size(); ++i){
        size_t cnt2 = 0;
        for(size_t j = i; j < i + t.size(); ++j){
            if(s[j] !=  t[j-i])
                break;
            cnt2++;
        }
        if(cnt2 == t.size()){
            cnt++;
        }
    }

    cout << cnt;

    
    return 0;
}