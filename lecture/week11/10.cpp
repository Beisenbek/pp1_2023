#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

    vector<pair<string, string> >v;
    v.push_back(make_pair("apple","yabloko"));
    v.push_back(make_pair("tree","derevo"));

    string str;
    cin >> str;
    for(int i = 0; i < v.size(); ++i){
        if(v[i].first == str){
            cout << v[i].second;
        }
    }

    return 0;
}