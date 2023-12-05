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
        cout << sum << endl;
    }

    bool operator < (row other){
        return this->sum < other.sum;
    }

    row operator + (row other){
        row result;
        result.sum = this->sum + other.sum;
        result.ss = this->ss + other.ss;
        return result;
    }
   
};

int main(){

    row r1;
    r1.read();
    row r2;
    r2.read();

    row r3 = r1 + r2;

    r3.print();

    return 0;
}