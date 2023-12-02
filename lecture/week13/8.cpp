#include <iostream>
#include <vector>

using namespace std;

void f(vector<int> v){
    v.push_back(3);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    f(v);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    return 0;
}