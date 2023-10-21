#include <iostream>

using namespace std;

bool is_printable(char c){
    string vowels = "aeoui";
    for(size_t j = 0; j < vowels.size(); ++j){
        if(tolower(c) == vowels[j]) return false;
    }
    return true;
}

int main(){

    string str;
    getline(cin, str);

    for(size_t i = 0; i < str.size(); ++i){
       if(is_printable(str[i])) cout << str[i];
    }

    return 0;
}