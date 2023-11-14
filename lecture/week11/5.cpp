#include <iostream>
#include <algorithm>

using namespace std;

int g(string s){
    int res = 0;
    string pattern = "AEIOUYaeiouy";
    for(int i = 0; i < s.size(); ++i){
        if(pattern.find(s[i]) != string :: npos) 
            res++;
    }
    return res;
}

bool f(string n1, string n2){
    if(g(n1) < g(n2)) return false;
    return true;
}

int main(){

    int n;
    cin >> n;
    string names[n];

    for(int i = 0; i < n; ++i){
        cin >> names[i];
    }

    sort(names, names + n, f);

    for(int i = 0; i < n; ++i){
        cout << names[i] << endl;
    }

    
    return 0;
}