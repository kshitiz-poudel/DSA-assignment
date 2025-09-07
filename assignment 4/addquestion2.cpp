// Additional Q2) Given a queue with random elements, sort it without using extra space.

#include <iostream>
#include <queue>
#include <climits>
using namespace std;

int minIndex(queue<int>& q, int sortedIndex) {
    int min_index = -1, min_val = INT_MAX, n = q.size();
    for (int i = 0; i < n; i++) {
        int curr = q.front(); q.pop();
        if (curr <= min_val && i <= sortedIndex) {
            min_index = i; min_val = curr;
        }
        q.push(curr);
    }
    return min_index;
}

void insertMinToRear(queue<int>& q, int min_index) {
    int n = q.size(), min_val;
    for (int i = 0; i < n; i++) {
        int curr = q.front(); q.pop();
        if (i != min_index) q.push(curr);
        else min_val = curr;
    }
    q.push(min_val);
}

void sortQueue(queue<int>& q) {
    for (int i = 1; i <= q.size(); i++) {
        int min_index = minIndex(q, q.size() - i);
        insertMinToRear(q, min_index);
    }
}

int main() {
    queue<int> q; int n, x;
    cout << "Enter number of elements: "; cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) { cin >> x; q.push(x); }

    sortQueue(q);

    cout << "Sorted Queue: ";
    while (!q.empty()) { cout << q.front() << " "; q.pop(); }
}
