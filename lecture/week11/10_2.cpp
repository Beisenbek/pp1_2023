#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

    map<string, string> v;
    v["apple"] = "yabloko";
    v["apple"] = "derevo";
    v["aport"] = "yabloko";

    string str;
    cin >> str;

    cout << v[str];
    

    return 0;
}