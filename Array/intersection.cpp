#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 1, 3, 4, 5, 7, 7, 8};
    int arr2[] = {1, 2, 2, 4, 6, 6, 8, 9};

    set<int> s2;
    set<int> intersection;

    for (auto x : arr2) {
        s2.insert(x);
    }

    for (auto x : arr1) {
        if (s2.find(x) != s2.end()) {
            intersection.insert(x);
        }
    }

    for (auto x : intersection) {
        cout << x << " ";
    }

    return 0;
}