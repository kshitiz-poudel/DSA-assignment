#include <iostream>
using namespace std;

#define N 3

int main() {
    int A[N][N] = {{1,0,0},{0,2,0},{0,0,3}};
    int B[N][N] = {{1,2,0},{0,0,4},{5,0,0}};
    int C[N][N] = {0};

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            for (int k=0; k<N; k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    cout << "Multiplication result:\n";
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
