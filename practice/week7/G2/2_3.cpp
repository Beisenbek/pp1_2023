#include <iostream>

using namespace std;

char lower(char c){
    if(c >='A' && c <= 'Z') return char(c + 32);
    return c;
}

bool is_printable(char c){
    string vowels = "aeoui";
    for(size_t j = 0; j < vowels.size(); ++j){
        if(vowels[j] == lower(c)) return false;
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