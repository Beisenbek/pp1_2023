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

    do{
        for(int i = 0; i < n; ++i){
            cout << v[i] << " ";
        }
        cout << endl;
    }while(prev_permutation(v.begin(), v.end()));

    return 0;
}