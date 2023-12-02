#include <iostream>
#include <algorithm>
#include "student.h"

using namespace std;

int main(){

    student * s = new student();
    s->readData();
    s->printData();
    
    return 0;
}