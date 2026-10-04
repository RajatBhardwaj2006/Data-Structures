#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,1,1,1,1,1,1,1,1,1};
    int largest = INT_MIN;
    int second = INT_MAX;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(largest < arr[i]){
            second = largest;
            largest = arr[i];
        }
    }
    cout << second << " " << largest; 
    return 0;
}