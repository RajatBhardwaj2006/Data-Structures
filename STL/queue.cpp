#include <bits/stdc++.h>
using namespace std;

void explain_queue(){
    queue <int> q;

    q.push(1);     // add element
    q.push(2);     // add element
    q.push(3);     // add element
    q.emplace(4); // add element

    q.back() += 4;
    
    cout << "Queue First element: " <<q.back() << endl;
    cout << "Queue Last element: " <<q.front() << endl;

    q.pop(); // remove element
}
int main(){
    explain_queue();
    return 0;
}