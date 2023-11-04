#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    bool is_ok = true;
    for(int i = 0; i < n/2; ++i){
        int left = a[i];
        int right = a[n - 1 - i];
        while(right > 0 &&  right % 10 == 0){
            right /= 10;
        }
        int new_left = 0;
        int k = 1;
        int temp = left;
    
        while(temp > 0){
            temp /= 10;
            if(temp > 0) k *= 10;
        }

        while(left > 0){
            new_left = new_left + (left % 10) * k;
            k /= 10;
            left /= 10;
        }

        if(new_left != right){
            is_ok = false;
            break;
        }
    }

    cout << ((is_ok)?"YES":"NO");

    return 0;
}