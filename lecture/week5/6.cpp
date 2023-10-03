#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    int best_value = 0;
    int best_row = 0;
    int best_col = 0;
    int value;

    for(int i = 0; i < n; ++i){
        int s = INT_MIN;
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            s = max(s, a[i][j]);
        }
        if(s > best_value){
            best_value = s;
            best_row = i;
        }
    }
     
    bool found = false;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == best_value){
                best_row = i;
                best_col = j;
                found = true;
                break;
            }
        }
        if(found) break;
    }

    cout << best_value << endl << best_row << " " << best_col;

    return 0;
}