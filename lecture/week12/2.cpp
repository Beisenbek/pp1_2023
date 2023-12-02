#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool f(int x){
    if(x % 2 == 0) return true;
    return false;
}

int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    cout << count_if(v.begin(), v.end(), f) << endl;

    return 0;
}