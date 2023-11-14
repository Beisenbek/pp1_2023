#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    for(int i = 9; i >= 0; --i){
        s.insert(i);
    }

    set<int> :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }
    
    return 0;
}