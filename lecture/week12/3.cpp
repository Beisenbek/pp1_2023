#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dividers_count(int x){
    int res = 0;
    for(int i = 1; i <=x; ++i){
        if(x % i == 0) res++;
    }
    return res;
}

bool has_2_dividers(int x){
    if(dividers_count(x) == 2) return true;
    return false;
}

int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    cout << count_if(v.begin(), v.end(), has_2_dividers) << endl;

    return 0;
}