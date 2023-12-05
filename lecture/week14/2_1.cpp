#include <iostream>
#include <algorithm>
#include <cmath>
#include <cfenv>
#include <cstring>
 
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 0; i <=n ;++i){
        long long res = powl(i, i);
        cout << res  << " ";
    }


    return 0;
}