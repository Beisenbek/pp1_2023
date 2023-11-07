#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){

    set<int> s;

    int a[] = {1,2,3,1,2,3,3,3,10,11,-1};
    int n = sizeof(a) / sizeof(int);
    cout << n << endl;

    for(int i = 0; i < n ; ++i){
        s.insert(a[i]);
    }

    set<int> :: iterator it;

    cout << s.size() << endl;
    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}