#include <iostream>

using namespace std;

int main(){

    string str;
    getline(cin, str);

    for(size_t i = 0; i < str.size(); ++i){
        if( str[i] != 'a' &&
            str[i] != 'o' && 
            str[i] != 'e' &&  
            str[i] != 'i' && 
            str[i] != 'u' && 
            str[i] != 'A' &&
            str[i] != 'O' && 
            str[i] != 'E' &&  
            str[i] != 'I' && 
            str[i] != 'U')
        cout << str[i];
    }


    return 0;
}