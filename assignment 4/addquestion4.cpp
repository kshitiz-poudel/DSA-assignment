// Additional Q4) The school cafeteria offers circular(0) and square(1) sandwiches. 
// Students queue with preferences. Find number of students unable to eat.

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int> q;
    for (int s : students) q.push(s);

    int i = 0, count = 0;
    while (!q.empty() && count < q.size()) {
        if (q.front() == sandwiches[i]) {
            q.pop(); i++; count = 0;
        } else {
            q.push(q.front()); q.pop();
            count++;
        }
    }
    return q.size();
}

int main() {
    int n;
    cout << "Enter number of students: "; cin >> n;
    vector<int> students(n), sandwiches(n);
    cout << "Enter students' preferences (0/1): ";
    for (int i = 0; i < n; i++) cin >> students[i];
    cout << "Enter sandwiches stack (0/1): ";
    for (int i = 0; i < n; i++) cin >> sandwiches[i];

    cout << "Students unable to eat: " << countStudents(students, sandwiches) << endl;
}
