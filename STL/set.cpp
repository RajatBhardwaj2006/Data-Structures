#include <bits/stdc++.h>
using namespace std;
void explain_set(){
    //* Log time every operation 
    set <int> s;

    s.insert(1); //? {1}
    s.insert(2); //? {1,2}
    s.insert(3); //? {1,2,3}
    s.insert(4); //? {1,2,3,4}
    s.insert(4); //? {1,2,3,4}  
    s.emplace(4); //? {1,2,3,4} 
    //! Set only allow unique element while keep them in a sorted manner 
    auto it = s.find(3); //? 

    s.erase(3); //* takes lograithmic time

    int cnt = s.count(1);

    // //auto it = s.lower_bound(2);
    // //auto it = s.upper_bound(3);
}
int main(){
    
    return 0;
}