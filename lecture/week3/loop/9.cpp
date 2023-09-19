#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i = i + 1){
        if(i % 2 == 0) 
            cout << i << " ";
    }

    return 0;
}