#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> q;

    for(int i = 1; i <= 3; ++i){
        q.push(i);
    }
    
    while(q.size() > 0){
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}