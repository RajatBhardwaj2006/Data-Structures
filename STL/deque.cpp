#include <bits/stdc++.h>
using namespace std;


void explain_deque(){
    deque <int> dq;
    // ! push into queue
    dq.push_back(1);
    dq.push_front(2);
    dq.emplace_back(3);
    dq.emplace_front(4);
    cout << "Before Pop: ";
    for(auto x:dq){
        cout << x << " " ;
    }
    
    cout << "\nAfter Pop: ";
    dq.pop_back();
    dq.pop_front();

    dq.front();

    for(auto x:dq){
        cout << x << " " ;
    }
    
}
int main(){
    
    explain_deque();
    return 0;
}