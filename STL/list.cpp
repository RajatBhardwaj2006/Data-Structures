#include <bits/stdc++.h>
using namespace std;


void explain_list(){
    list <int> ls;
    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(3);
    ls.emplace_front(4);

    for(auto x:ls){
        cout << x << " ";
    }
} 
int main(){
    explain_list();
    return 0;
}