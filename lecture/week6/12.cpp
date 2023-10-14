#include <iostream>

using namespace std;

int main(){

   string x;
   cin >> x;
   string y;
   cin >> y;

   if(x.find(y) == string :: npos){
        cout << "No!";
   }else{
        cout << "Yes!";
   }


    return 0;
}