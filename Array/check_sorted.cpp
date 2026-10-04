#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,9,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            cout << "Array is Not Sorted!" << endl;
            return 0;
        }
    }
    cout << "Array is Sorted!" << endl;
    return 0;
}