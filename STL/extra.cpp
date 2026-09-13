#include <bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> p1, pair<int,int> p2){
    if(p1.second < p2.second){
        return true;
    }
    if(p1.second > p2.second){
        return false;
    }
    if(p1.first > p2.first){
        return true;
    }
    return false;
}
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

void explain_popcount(){
    int num1 = 7;
    int cnt = __builtin_popcount(num1);

    long long num2 = 123234335454;
    int cnt = __builtin_popcountll(num2);
}
int main(){
    explain_sort();
    return 0;
}