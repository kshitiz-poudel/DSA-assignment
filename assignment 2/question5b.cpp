#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of tri-diagonal matrix: ";
    cin >> n;
    int size = 3*n - 2;
    int tri[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) cin >> tri[i];

    cout << "Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (abs(i - j) <= 1) cout << tri[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
