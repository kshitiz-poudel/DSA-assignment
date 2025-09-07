// Additional Q3) Given a queue of n natural numbers, check whether they can be sorted in another queue using a stack.

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

bool checkSorted(queue<int>& q) {
    stack<int> st;
    int expected = 1, n = q.size();

    while (!q.empty()) {
        int front = q.front(); q.pop();
        if (front == expected) expected++;
        else {
            if (!st.empty() && st.top() < front) return false;
            st.push(front);
        }
        while (!st.empty() && st.top() == expected) {
            st.pop(); expected++;
        }
    }
    return (expected - 1 == n);
}

int main() {
    queue<int> q; int n, x;
    cout << "Enter number of elements: "; cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) { cin >> x; q.push(x); }

    if (checkSorted(q)) cout << "Yes, can be sorted\n";
    else cout << "No, cannot be sorted\n";
}
