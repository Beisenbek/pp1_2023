#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

    map<string, string> v;
    v["orange"] = "apelsin";
    v["apple"] = "yabloko";
    v["apple"] = "derevo";
    v["aport"] = "yabloko";

    v.insert(make_pair("carrot","morkovka"));

    map<string, string> :: iterator it;

    for(it = v.begin(); it != v.end(); ++it){
        pair<string, string> cur = *it;
        cout << cur.first << " " << cur.second << endl;
    }

    return 0;
}