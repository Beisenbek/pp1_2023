#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int table[n][n];

    for(int i = 0; i < n; ++i){
        table[i][0] = i;
        table[0][i] = i;
    }

    for(int i = 1; i < n; ++i){
        for(int j = 1; j < n; ++j){
            table[i][j] = i * j;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}