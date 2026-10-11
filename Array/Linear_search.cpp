#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter Element you want to find form 1-10: ";cin >> k;
    if(k > n){
        cout << "K cannot be greater then N";
    }

    for(int i=0; i<n; i++){
        if(arr[i] == k){
            cout << "Index of " << k << " Element is: " << i << ".";
        }
    }
    return 0;
}