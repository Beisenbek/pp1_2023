#include <iostream>

using namespace std;

int main(){

    string str("test");
    
    for(size_t i = 0; i < str.size(); ++i){
        cout << str[i] << endl;
    }


    return 0;
}