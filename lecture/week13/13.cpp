#include <iostream>
#include <algorithm>

using namespace std;

struct student{
    string firstName;
    string lastName;
    double gpa;
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
        cin >> a[i].firstName >> a[i].lastName >> a[i].gpa;
    }
    
    sort(a, a + n, f);

    for(int i = 0; i < n; ++i){
        cout  << a[i].firstName << " "  << a[i].lastName << " " <<  a[i].gpa << endl;
    }
    return 0;
}