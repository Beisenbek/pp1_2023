#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    string name[n];
    int point[n];

    for(int i = 0; i < n; ++i){
        cin >> name[i] >> point[i];
    }

    sort(name, name + n);
    sort(point, point + n);

    for(int i = 0; i < n; ++i){
        cout << name[i] << " " <<  point[i] << endl;
    }

    return 0;
}