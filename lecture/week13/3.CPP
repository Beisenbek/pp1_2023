#include <iostream>

using namespace std;

void print(int a[], int n){
    for(int i = 0 ; i < n; ++i){
        cout << *(a + i) << " ";
    }
}

void fill(int a[], int n){
    for(int i = 0 ; i < n; ++i){
        *(a + i) = i + 1;
    }
}

int main(){

    int * a = new int[10];//int a[10];


    fill(a, 10);
    print(a, 10);

    return 0;
}