#include <iostream>

using namespace std;


void print(int x[], int n){
    for(int i = 0; i < n; ++i){
        x[i] = 1;
    }
    for(int i = 0; i < n; ++i){
        cout << x[i] << " ";
    }
    cout << endl;
}


int main(){
    int y[] = {1, 2, 3};
    int n = sizeof(y)/sizeof(int);

    print(y, n);

    for(int i = 0; i < n; ++i){
        cout << y[i] << " ";
    }

    return 0;
}