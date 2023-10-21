#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
   
    string n;
    cin >> n;
    int odd_sum = 0;
    int even_sum = 0;

    for(size_t i = 0; i < n.size(); ++i){
        if(i % 2 == 1) odd_sum += n[i] - 48;
        else even_sum += n[i] - 48;
    }

    /*
    if(even_sum == odd_sum) cout << "YES";
    else cout << "NO";
    */
    cout << (even_sum == odd_sum?"YES":"NO");
    
    return 0;
}