#include <bits/stdc++.h>
using namespace std;

void explain_stack() {
    stack<int> sk;

    // Push operation
    sk.push(1);
    sk.push(2);
    sk.push(3);
    sk.push(4);
    sk.emplace(5);

    // Top element
    cout << "Top Element: " << sk.top() << endl;

    // Size
    cout << "Size of element: " << sk.size() << endl;

    // Is empty
    cout << "Stack Empty: " << sk.empty() << endl;

    // Pop operation
    sk.pop();

    cout << "After pop, Top Element: " << sk.top() << endl;

    // Print all elements
    cout << "Stack elements: ";

    while (!sk.empty()) {
        cout << sk.top() << " ";
        sk.pop();
    }

    cout << endl;
}

int main() {
    explain_stack();

    return 0;
}