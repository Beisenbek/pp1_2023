#include <iostream>

using namespace std;

void print(string s, int level, int max_level){
    if(level <= max_level){
        s.insert(0, 2 * level - 1, '*');
        s.insert(0, max_level - level, '+');
        cout << s << endl;
        print("", level + 1, max_level);
    }
}

int main(){

    int n;
    cin >> n;
    print("", 1, n);

    return 0;
}