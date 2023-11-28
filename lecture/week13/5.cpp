#include <iostream>
#include <stdlib.h>
using namespace std;

int apb(int a, int b){
    return a + b;
}

void print_help(){
    cout << "enter two numbers: a and b." << endl;
}

int main(int argc, char * argv[]){
    if(argc == 3){
        cout << apb(atoi(argv[1]), atoi(argv[2]));
    }else{
        print_help();
    }
    return 0;
}