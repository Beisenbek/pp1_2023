#include <iostream>

using namespace std;

string generate(string s, int level, int max_level){
    if(level > max_level) return s;
    s.append(max_level - level, '+');
    s.append(2 * level - 1, '*');
    s.append("\n");
    return generate(s, level + 1, max_level);
}

int main(){

    int n;
    cin >> n;
    cout << generate("", 1, n);

    return 0;
}