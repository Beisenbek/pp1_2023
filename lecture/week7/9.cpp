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


void print(int x[], int n){
    for(int i = 0; i < n; ++i){
        cout << x[i] << " ";
    }
    cout << endl;
}


int main(){
    int n;
    cin >> n;
    int y[n];
    read(y, n);
    mutate(y, n);
    print(y, n);

    return 0;
}