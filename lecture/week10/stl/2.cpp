#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> v;

    for(int i = 3; i >= 1 ; --i){
        v.push_back(i);
    }

    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}