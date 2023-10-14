#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;
    cin >> n;
    int t = 0;
    
    int a[2 * n + 1][2 * n + 1];

    for(int i = 0; i < 2 * n + 1; ++i){
        for(int j = 0; j  < 2 * n + 1; ++j){
            a[i][j] = 1;
        }
    }

    int r = n;
    int c = n;
    int value = 0;


    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, -1, 0, 1};
    int cur_d = 0;

    bool exit = false;
    for(int i = 1;; i++){
        for(int j = 1; j <= 2; ++j){
          for(int s = 1; s <= i; ++s){
            a[r][c] = value++;
            r += dr[cur_d];
            c += dc[cur_d];
            if(value >= 4 * n * n + 4 * n + 1){
                exit = true;
                break;
            }
           } 
           if(exit) break;
           cur_d = (cur_d + 1 ) % 4;
        }
        if(exit) break;
    }

    for(int i = 0; i < 2 * n + 1; ++i){
        for(int j = 0; j  < 2 * n + 1; ++j){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}