#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];
    int s[n];

    for(int i = 0; i < n; ++i){
        s[i] = 0;
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            s[i] += a[i][j];
        }
    }

    int ix = 0;

    for(int i = 1; i < n; ++i){
        if(s[i] > s[ix]){
            ix = i;
        }
    }

    cout << s[ix] << endl << ix;

    return 0;
}