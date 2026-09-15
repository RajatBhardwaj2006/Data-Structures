#include <bits/stdc++.h>
using namespace std;
int number(int n, int x){
    if(n == x){
        return 1;
    }   

    cout << n << endl;
    n++;
    number(n,x);
}
int main(){
    int n, x;
    cout << "Enter Starting Number: "; 
    cin >> n;
    cout << "Enter Ending Number: "; 
    cin >> x;
    number(n,x);
    return 0;
}