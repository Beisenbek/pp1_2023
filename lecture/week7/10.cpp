#include <iostream>

using namespace std;


void read(int x[], int n){
    for(int i = 0; i < n; ++i){
        cin >> x[i];
    }
}

void mutate(int x[], int n){
    for(int i = 0; i < n; ++i){
        x[i] *= 2;
    }
}


void print(int * x, int n){
    x[0] = 10;
    for(int i = 0; i < n; ++i){
        cout << x[i] << " ";
    }
    cout << endl;
}


int main(){
    int y[] = {1,2,3};
    int n = sizeof(y)/sizeof(int);
    print(y, n);
    cout << y[0] << endl;
    return 0;
}