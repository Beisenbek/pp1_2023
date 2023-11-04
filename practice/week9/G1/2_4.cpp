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

string is_fully_symmetric(string a[], int left, int right){
    if(left >= right) return "YES";
    if(prepare(a[right]) != a[left]) return "NO";
    return is_fully_symmetric(a, left + 1, right - 1);
}

int main(){
    int n;
    cin >> n;
    string a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    cout << is_fully_symmetric(a, 0, n - 1);

    return 0;
}