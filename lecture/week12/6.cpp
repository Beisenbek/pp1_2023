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

    vector<int> :: iterator it = unique(v.begin(), v.end());

    v.erase(it, v.end());

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}