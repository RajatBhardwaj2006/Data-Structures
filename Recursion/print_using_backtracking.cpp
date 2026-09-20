// ! Print from 1 - N using backtracking 

#include <bits/stdc++.h>
using namespace std;
void print(int i, int n){
    if(i > n){
        return;
    }
    print(i+1,n); //! Reverse format
    cout << i << " ";
    // print(i+1,n); //! forward format
}
int main(){
    print(1,5);
    return 0;
}