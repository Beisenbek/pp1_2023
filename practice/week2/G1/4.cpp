#include <iostream>

using namespace std;

int main(){

    int r, c;
    int fr, fc;
    cin >> r >> c >> fr >> fc;

    if(r + 2 == fr && (c + 1 == fc || c - 1 == fc) ){
        cout << "YES";
    }
    else if(r - 2 == fr && (c + 1 == fc || c - 1 == fc) ){
        cout << "YES";
    }
    else if(r - 1 == fr && (c + 2 == fc || c - 2 == fc) ){
        cout << "YES";
    }
    else if(r + 1 == fr && (c + 2 == fc || c - 2 == fc) ){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}