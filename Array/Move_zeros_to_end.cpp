#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1,2,0,3,4,0,0,5,0,6,7,0,8,9};

    int n = sizeof(arr) / sizeof(arr[0]);
    
    int i, j = 0;

    for(i=0; i<n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j = j + 1;
        }
    }
    while(j < n){
        arr[j] = 0;
        j = j + 1;
    }

    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}