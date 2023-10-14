#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    int s = 0;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 1; i < n; ++i){
        int cur = i;
        int prev = i - 1;
        if(a[cur] > a[prev]) s = s + 1;
    }

    cout << s << endl;

    return 0;
}