#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end());

    return 0;
}