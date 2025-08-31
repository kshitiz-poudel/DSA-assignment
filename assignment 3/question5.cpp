// Q5. Write a program for the evaluation of a Postfix expression.

#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int evaluatePostfix(string expr) {
    stack<int> s;
    for (char c : expr) {
        if (isdigit(c)) {
            s.push(c - '0'); // Convert char to int
        } else {
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();
            switch (c) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
            }
        }
    }
    return s.top();
}

int main() {
    string expr;
    cout << "Enter a postfix expression (use single-digit operands): ";
    cin >> expr;

    cout << "Evaluation result: " << evaluatePostfix(expr) << endl;

    return 0;
}
