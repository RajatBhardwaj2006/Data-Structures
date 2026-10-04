#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1,2,2,3,4,5,5,5,6,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 1;

    for(int i = 1; i < n; i++) {

        if(arr[i] != arr[i - 1]) {
            arr[j] = arr[i];
            j++;
        }
    }

    for(int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}