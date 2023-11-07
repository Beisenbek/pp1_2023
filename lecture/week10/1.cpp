#include <iostream>

using namespace std;

void print(int level, int max_level){
    if(level > max_level) return;
    for(int i = 0; i < max_level - level; ++i){
        cout << " ";
    }
    for(int i = 0; i < 2 * level - 1; ++i){
        cout << "*";
    }
    cout << endl;
    print(level + 1, max_level);
}

int main(){

    int n;
    cin >> n;
    print(1, n);

    return 0;
}