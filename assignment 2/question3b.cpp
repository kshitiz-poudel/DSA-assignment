/* Given an array of n-1 distinct integers in the range of 1 to n, find the missing number 
in it in a Sorted Array 
(b) Using binary search. */

#include <iostream>
using namespace std;

int missingNumberBinary(int arr[], int n) {
    int low = 0, high = n - 2; 
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] != mid + 1) high = mid - 1;
        else low = mid + 1;
    }
    return low + 1;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;
    cout << "Missing number (Binary Search): " << missingNumberBinary(arr, n) << endl;
    return 0;
}