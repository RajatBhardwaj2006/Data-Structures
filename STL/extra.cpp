#include <bits/stdc++.h>
using namespace std;
void explain_sort(){
    //! Sort  
    vector <int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(10);
    v.push_back(5);
    cout << "Before Sort: ";
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\nAfter Sort: ";
    sort(v.begin(), v.end());
    for(auto x : v){
        cout << x << " ";
    }
    //! sort greater to smaller
    cout << "\nSort Greather first: ";
    sort(v.begin(), v.end(), greater<int>());
    for(auto x : v){
        cout << x << " ";
    }
}
int main(){
    explain_sort();
    return 0;
}