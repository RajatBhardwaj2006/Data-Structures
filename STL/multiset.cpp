#include <bits/stdc++.h>
using namespace std;

void explain_multiset(){
    multiset <int> ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1);

    int cnt = ms.count(1);

    ms.erase(ms.find(1));

}
int main(){
    explain_multiset();
    return 0;
}