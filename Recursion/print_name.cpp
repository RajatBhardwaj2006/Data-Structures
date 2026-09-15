#include <bits/stdc++.h>
using namespace std;
void name(int n){
    if(n == 5){
        return;
    }
    n++;
    cout << "Rajat Bhardwaj." << endl;
    name(n);
}
int main(){
    name(1);
    return 0;
}