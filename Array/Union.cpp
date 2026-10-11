#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,1,3,4,5,7,7,8};
    int arr2[] = {1,2,2,4,6,6,8,9};

    set <int> u;

    for(auto x:arr1){
        u.insert(x);
    } 
    for(auto x:arr2){
        u.insert(x);
    } 
    for(auto i:u){
        cout << i << " ";
    }
    return 0;
}