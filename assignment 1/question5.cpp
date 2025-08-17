// Write a program to find sum of every row and every column in a two-dimensional array.

#include<iostream>
using namespace std;

int main(){
  int n, m, i, j;
  cout << "Enter number of rows and columns: ";
  cin >> n >> m;
  int arr[n][m];
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin >> arr[i][j];
    }
  }
  
  
  for(i=0;i<n;i++){
    int rowsum = 0;
    for(j=0;j<m;j++){
      rowsum += arr[i][j];
    }
    cout << "Sum of row" << i << " " << rowsum;
    cout << endl;
  }
  
  for(i=0;i<n;i++){
    int columnsum = 0;
    for(j=0;j<m;j++){
      columnsum += arr[i][j];
    }
    cout << "Sum of column" << i << " " << columnsum;
    cout << endl;
  }
  
}