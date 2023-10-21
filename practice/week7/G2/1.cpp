#include <iostream>

using namespace std;

int a[100][100];
int posR, posC, k, n;

void fillRange(int dr, int dc, int step_length){
    for(int j = 1; j <= step_length; ++j){
        posR += dr;
        posC += dc;
        a[posR][posC] = k++;
    }   
}

void printArray(){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){

    cin >> n;
    
    k = 1;
    posR = 0;
    posC = -1;

    int dR[] = {0, 1, 0, -1};
    int dC[] = {1, 0, -1, 0};
    int dInd = 0;

    for(int step_length = n; step_length >= 1; --step_length){
        int period = 2;
        if(step_length == n) period = 1;
        for(int x = 1; x <= period; ++x){
            fillRange(dR[dInd], dC[dInd], step_length);
            dInd = (dInd + 1) % 4;
        }
    }

    printArray();


    return 0;
}