#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> v;

    for(int i = 3; i >= 1 ; --i){
        v.push_back(i);
    }

    sort(v.begin(), v.end());

    cout << v.size() << endl;

    for(int i = 0; i < v.size() ; ++i){
        cout << v[i] << " ";
    }

    return 0;
}