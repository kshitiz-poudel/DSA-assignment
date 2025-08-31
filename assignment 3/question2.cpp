// Q2. Given a string, reverse it using STACK.
// Example: "DataStructure" should be output as "erutcurtSataD"

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    stack<char> s;

    // Push all characters onto stack
    for (char c : str) {
        s.push(c);
    }

    // Pop characters and reverse string
    string rev = "";
    while (!s.empty()) {
        rev += s.top();
        s.pop();
    }

    cout << "Reversed string: " << rev << endl;

    return 0;
}
