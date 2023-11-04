#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    char a[n][2*n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2 * n; ++j){
            a[i][j] = ' ';
        }
    }

    int right = 1;
    int left = 2 * n - 1;

    for(int i = n - 1; i >= 0; --i){
        for(int j = right; j <= left; ++j){
            a[i][j] = '*';
        }
        right++;
        left--;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2 * n; ++j){
            if(j > n && a[i][j] != '*') break;
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}