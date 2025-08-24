/*Implement the Binary search algorithm regarded as a fast search algorithm with 
run-time complexity of Ο(log n) in comparison to the Linear Search.*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter element to search: ";
    cin >> x;
    int result = binarySearch(arr, n, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}