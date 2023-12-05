#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    int n, m, x;
    cin >> n;
    vector<int> v[n];
    pair<int, int> sum[n];

    for(int i = 0; i < n; ++i){
        cin >> m;
        sum[i].first = 0;
        sum[i].second = i;
        for(int j = 0; j < m; ++j){
            cin >> x;
            v[i].push_back(x);
            sum[i].first += x;
        }
    }

    sort(sum, sum + n);

    for(int i = 0; i < n; ++i){
        //cout << sum[i].first  << " " << sum[i].second << endl;
        for(int j = 0; j < v[sum[i].second].size(); ++j){
            cout << v[sum[i].second][j] << " ";
        }
        cout << endl;
    }

    return 0;
}