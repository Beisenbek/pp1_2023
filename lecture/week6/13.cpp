#include <iostream>

using namespace std;

int main(){

   string x;
   cin >> x;
   string y;
   cin >> y;

   size_t pos = x.find(y);

   if(pos == string::npos){
        cout << "No!";
   }else{
        cout << pos;
   }


    return 0;
}