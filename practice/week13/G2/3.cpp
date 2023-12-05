#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct row{
    vector<int> items;
    int get_sum(){
        int res = 0;
        for(int i = 0; i < items.size(); ++i){
            res += items[i];
        }
        return res;
    }
    void read_items(){
        int m, x;
        cin >> m;
        for(int j = 0; j < m; ++j){
            cin >> x;
            items.push_back(x);
        }
    }
    void print_items(){
        for(int j = 0; j < items.size(); ++j){
            cout << items[j] << " ";
        }
        cout << endl;
    }
    bool operator < (row other_row){
        return this->get_sum() < other_row.get_sum();
    }
};



int main(){

    int n, m, x;
    cin >> n;
    vector<row> v(n);

    for(int i = 0; i < n; ++i){
        v[i].read_items();
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; ++i){
        v[i].print_items();
    }

    return 0;
}