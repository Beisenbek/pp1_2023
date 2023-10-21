#include <iostream>

using namespace std;

bool g1(bool x, bool y, bool z){
    return x + y + z >= 2;
}

bool g2(bool x, bool y, bool z){
    if(x == true && y == true) return true;
    if(x == true && z == true) return true;
    if(z == true && y == true) return true;
    return false;
}

bool g3(bool x, bool y, bool z){
    int x1 = x ? 1 : 0;
    int y1 = y ? 1 : 0;
    int z1 = z ? 1 : 0;
    return x1 + y1 + z1 >= 2;
}

int convert(bool x){
    if(x == true) return 1;
    return 0;
}

bool g4(bool x, bool y, bool z){
    int x1 = convert(x);
    int y1 = convert(y);
    int z1 = convert(z);
    return x1 + y1 + z1 >= 2;
}

int main(){
    bool x, y, z;
    cin >> x >> y >> z;
    cout << g3(x, y, z);
    return 0;
}