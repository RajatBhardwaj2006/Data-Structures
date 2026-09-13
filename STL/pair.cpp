#include <bits/stdc++.h>
using namespace std;

void explainpair(){
    pair<int, float> p = {1,3.1};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> r = {1,{2,3}};
    cout << r.first << " "  << r.second.first << " " << r.second.second << endl; 

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    //                        0     1    2
    cout << arr[1].second << " " <<arr[2].first;  
}

int main(){
    explainpair();
}