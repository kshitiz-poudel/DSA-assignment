/* Given an array of n-1 distinct integers in the range of 1 to n, find the missing number 
in it in a Sorted Array 
(a) Linear time */

#include <iostream>
using namespace std;

int missingNumberLinear(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) sum += arr[i];
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6; // array should have numbers 1..6
    cout << "Missing number (Linear): " << missingNumberLinear(arr, n) << endl;
    return 0;
}

