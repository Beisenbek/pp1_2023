#include <iostream>

using namespace std;

struct student{
    string firstName;
    string lastName;
    double gpa;
    void readData(){
        cin >> firstName >> lastName >> gpa;
    }
    void printData(){
        cout  << firstName << " "  << lastName << " " << gpa << endl;
    }
};