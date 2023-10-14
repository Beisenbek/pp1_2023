#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int best_value = 0;
    int best_index = 0;
    int value;

    for(int i = 0; i < n; ++i){
        int s = 0;
        for(int j = 0; j < m; ++j){
            cin >> value;
            s += value;
        }
        if(best_value < s){
            best_value = s;
            best_index = i;
        }
    }

    cout << best_value << endl <<best_index;

    return 0;
}