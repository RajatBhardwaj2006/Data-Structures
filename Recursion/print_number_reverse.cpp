#include <bits/stdc++.h>
using namespace std;
void reverse(int i, int n){
    if(i == n){
        return ;
    }
    i--;
    cout << i << " ";
    reverse(i,n);
}
int main(){
    int i,n;
    cout << "Ending index: ";cin >> i;
    cout << "starting index: ";cin >> n;
    reverse(i,n);
    return 0;
}