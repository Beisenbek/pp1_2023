#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n][n];

    int k = 1;
    int r = 0;
    int c = -1;
    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};
    
    int idx = 0;
    
    for(int step_length = n; step_length >= 1; --step_length){
        int period = 2;
        if(step_length == n) period = 1;
        for(int p = 1; p <= period; ++p){
            for(int step = 1; step <= step_length; ++step){
                r = r + dr[idx];
                c = c + dc[idx];
                a[r][c] = k++;
            }
            idx = (idx + 1) % 4;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}