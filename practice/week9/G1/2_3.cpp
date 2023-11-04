#include <iostream>
#include <algorithm>

using namespace std;

string prepare(string str){
    reverse(str.begin(), str.end());
    while(str.size() > 0 && str[0] == '0'){
        str = str.substr(1,str.size() - 1);
    }
    return str;
}

bool equal(string a, string b){
    return a == b;
}

int main(){
    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    bool is_ok = true;
    for(int i = 0; i < n/2; ++i){
        if(!equal(a[i], prepare(a[n - 1 - i]))){
            is_ok = false;
            break;
        }
    }

    cout << ((is_ok)?"YES":"NO");

    return 0;
}