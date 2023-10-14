#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10, 1,2,3,4,5,6,7,8,9,10, 1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(a)/sizeof(int);

    sort(a + 10, a + n);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}