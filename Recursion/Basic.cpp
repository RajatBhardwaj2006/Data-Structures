#include <bits/stdc++.h>
using namespace std;

void print(int n) {

    // Base condition
    if (n == 0) {
        return;
    }

    cout << n << " ";

    // Recursive call
    print(n - 1);
}

int main() {
    print(5);

    return 0;
}