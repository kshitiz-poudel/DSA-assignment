#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int num1, num2;
    cout << "Enter number of non-zero elements in matrix 1: ";
    cin >> num1;
    Element A[num1];
    cout << "Enter row col val for matrix 1:\n";
    for (int i = 0; i < num1; i++) cin >> A[i].row >> A[i].col >> A[i].val;

    cout << "Enter number of non-zero elements in matrix 2: ";
    cin >> num2;
    Element B[num2];
    cout << "Enter row col val for matrix 2:\n";
    for (int i = 0; i < num2; i++) cin >> B[i].row >> B[i].col >> B[i].val;

    cout << "Addition result:\n";
    for (int i = 0; i < num1; i++) cout << A[i].row << " " << A[i].col << " " << A[i].val << endl;
    for (int i = 0; i < num2; i++) cout << B[i].row << " " << B[i].col << " " << B[i].val << endl;
    return 0;
}
