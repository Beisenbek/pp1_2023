#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int n;
    cin >> n;
    pair<double, pair<string, string> > students[n];
    string s, f;
    double g;

    for(int i = 0; i < n; ++i){
        cin >> s >> f >> g;
        students[i] = make_pair(g, make_pair(f, s));
    }
    
    sort(students, students + n);

    for(int i = 0; i < n; ++i){
        cout << students[i].first << " " << students[i].second.first << " " <<  students[i].second.second << endl;
    }
    return 0;
}