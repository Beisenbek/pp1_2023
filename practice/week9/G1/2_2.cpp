#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    bool is_ok = true;
    for(int i = 0; i < n/2; ++i){
        string left = a[i];
        string right = a[n - 1 - i];

        reverse(right.begin(), right.end());
        while(right.size() > 0 && right[0] == '0'){
            right = right.substr(1,right.size() - 1);
        }

        if(left != right){
            is_ok = false;
            break;
        }
    }

    cout << ((is_ok)?"YES":"NO");

    return 0;
}