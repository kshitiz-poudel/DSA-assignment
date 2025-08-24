#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int rows, cols, num;
    cout << "Enter rows, cols, number of non-zero elements: ";
    cin >> rows >> cols >> num;
    Element mat[num];
    cout << "Enter row col value for each element:\n";
    for (int i = 0; i < num; i++) cin >> mat[i].row >> mat[i].col >> mat[i].val;

    cout << "Transpose:\n";
    for (int i = 0; i < num; i++) {
        cout << mat[i].col << " " << mat[i].row << " " << mat[i].val << endl;
    }
    return 0;
}
