#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<int, int> p1, pair<int, int> p2){
    if(p1.second > p2.second) return false;
    if(p1.second == p2.second)
        if(p1.first < p2.first)
            return false;
    return true;
}

int main(){

    int n, x, y;
    cin >> n;
    
    pair<int, int> p[n];

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        p[i] = make_pair(x, y);
    }

    sort(p, p + n, f);

    for(int i = 0; i < n; ++i){
        cout << p[i].first << " " << p[i].second << endl;
    }
 
    return 0;
}