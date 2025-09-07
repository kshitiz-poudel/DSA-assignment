// Q3) Write a program to interleave the first half of the queue with second half. 
// Sample Input: 4 7 11 20 5 9 
// Output: 4 20 7 5 11 9

#include <iostream>
#include <queue>
using namespace std;

void interleaveQueue(queue<int>& q) {
    int n = q.size();
    int half = n / 2;
    queue<int> firstHalf;

    for (int i = 0; i < half; i++) {
        firstHalf.push(q.front());
        q.pop();
    }

    while (!firstHalf.empty()) {
        q.push(firstHalf.front()); firstHalf.pop();
        q.push(q.front()); q.pop();
    }
}

int main() {
    queue<int> q;
    int n, x; 
    cout << "Enter number of elements (even): "; cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) { cin >> x; q.push(x); }

    interleaveQueue(q);

    cout << "Output: ";
    while (!q.empty()) { cout << q.front() << " "; q.pop(); }
}
