#include <bits/stdc++.h>
using namespace std;

void explain_PQ(){
    priority_queue <int> pq;

    pq.push(1);         //! {1}
    pq.push(3);         //! {3,1}
    pq.push(4);         //! {4,3,1}
    pq.emplace(7);      //! {7,4,3,1}
    
    cout << pq.top(); //! {7}
    pq.pop(); //! {4,3,1}


    //? Minimum Heap
    priority_queue<int, vector <int>, greater<int>> pq;
    pq.push(1);         //! {1}
    pq.push(3);         //! {1,3}
    pq.push(4);         //! {1,3,4}
    pq.emplace(7);      //! {1,3,4,7}

}
int main(){
    explain_PQ();
    return 0;
}