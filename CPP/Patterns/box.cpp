#include <bits/stdc++.h>
using namespace std;

int patterns(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "*" << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    patterns(n);
    return 0;
}