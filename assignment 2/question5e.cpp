#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of symmetric matrix: ";
    cin >> n;
    int size = n * (n + 1) / 2;
    int sym[size];
    cout << "Enter " << size << " elements (lower triangular part): ";
    for (int i = 0; i < size; i++) cin >> sym[i];

    cout << "Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << sym[k++] << " ";
            else cout << sym[j * (j + 1) / 2 + i] << " ";
        }
        cout << endl;
    }
    return 0;
}
