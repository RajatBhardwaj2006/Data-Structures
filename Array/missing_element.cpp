#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,5,6};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr)/sizeof(arr[0]) + 1;

    int exp_sum = n * (n + 1) / 2;
    int act_sum = 0;

    for(int i=0; i<arr_size; i++){
        act_sum += arr[i];
    }
    int missing = exp_sum - act_sum;

    cout << "Expected sum is: "<<exp_sum<<"\nActual sum is "<<act_sum<<"\nMissing value is: "<<missing<< endl;
    return 0;
}