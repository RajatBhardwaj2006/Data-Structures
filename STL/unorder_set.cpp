#include <bits/stdc++.h>
using namespace std;

void explain_unordered_set() {

    unordered_set<int> st;

    // Insert
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(20);  // Duplicate -> ignored

    // Print
    cout << "Elements: ";

    for (auto x : st) {
        cout << x << " ";
    }

    cout << endl;

    // Find
    if (st.find(20) != st.end()) {
        cout << "20 is present" << endl;
    } else {
        cout << "20 is not present" << endl;
    }

    // Count
    cout << "Count of 20: " << st.count(20) << endl;

    // Size
    cout << "Size: " << st.size() << endl;

    // Erase
    st.erase(20);

    cout << "After erase: ";
    for (auto x : st) {
        cout << x << " ";
    }

    cout << endl;

    // Empty
    cout << "Is empty: " << st.empty() << endl;
}

int main() {
    explain_unordered_set();

    return 0;
}