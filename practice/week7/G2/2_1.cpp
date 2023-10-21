#include <iostream>

using namespace std;

int main(){

    string str;
    getline(cin, str);

    string vowels = "aeouiAEOUI";

    for(size_t i = 0; i < str.size(); ++i){
       bool printable = true;
       for(size_t j = 0; j < vowels.size(); ++j){
            if(vowels[j] == str[i]){
                printable = false;
                break;
            }
       }
       if(printable) cout << str[i];
    }


    return 0;
}