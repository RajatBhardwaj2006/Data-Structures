#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,9,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int once = 0;

    for(int i=0; i<n; i++){
        once ^= arr[i];
    }
    cout << "Number Appear Once: "<< once << "\n";
    return 0;
}