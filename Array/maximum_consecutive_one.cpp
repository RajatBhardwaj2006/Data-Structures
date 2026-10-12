#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_one = 0;
    int act_max = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            max_one++;
            act_max = max(max_one, act_max);
        }else{
            max_one = 0;
        }
    }
    cout << act_max;
    return 0;
}