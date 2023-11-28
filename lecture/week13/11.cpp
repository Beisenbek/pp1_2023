#include <iostream>
#include <vector>

using namespace std;


int main(){

    int n;
    cin >> n;
    string s[n];
    string f[n];
    double g[n];
    for(int i = 0; i < n; ++i){
        cin >> s[i] >> f[i] >> g[i];
    }
    
    sort(s, s + n);

    for(int i = 0; i < n; ++i){
        cout << s[i] << " " << f[i] << " " <<  g[i] << endl;
    }
    return 0;
}