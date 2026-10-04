#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 50, 70, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    for(int x=0; x<n; x++){
        if(l < arr[x]){
            l = arr[x];
        }
    }
    cout << l << endl;
    return 0;
}