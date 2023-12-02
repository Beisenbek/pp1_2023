#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

int f(){
    int res = rand() % 60 + 18;
    int cnt = 1;
    while(res < 18 && res > 60 && cnt < 1000){
        res = rand() % 60 + 18;
    }
    if(cnt >= 1000) res = 55;
    return res;
}

int main(){

    srand(time(0));

    vector<int> v(10);

    generate(v.begin(), v.end(), f);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}