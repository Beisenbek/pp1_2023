#include <iostream>
#include <algorithm>

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

bool f(student s1, student s2){
    if(s1.gpa < s2.gpa) return false;
    return true;
}


int main(){

    int n;
    cin >> n;
    student a[n];

    for(int i = 0; i < n; ++i){
        a[i].readData();
    }
    
    sort(a, a + n, f);

    for(int i = 0; i < n; ++i){
        a[i].printData();
    }
    return 0;
}