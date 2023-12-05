#include <iostream>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

struct row{
    string ss;
    long long sum;
    row(){
        sum = 0;
    }
    void read(){
        long long m;
        string x;
        cin >> m;
        for(int i = 0; i < m; ++i){
            cin >> x;
            sum += atoll(x.c_str());
            ss = ss + x + " ";
        }
    }
    void print(){
        cout << ss << endl;
    }

    bool operator < (row other){
        return this->sum < other.sum;
    }
   
};

int main(){

    int n;
    cin >> n;
    row rows[n];

    for(int i = 0; i < n; ++i){
       rows[i].read();
    }

    sort(rows, rows + n);

    for(int i = 0; i < n; ++i){
       rows[i].print();
    }

    return 0;
}