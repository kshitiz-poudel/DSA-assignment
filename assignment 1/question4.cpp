//Reverse the elements of an array

#include<iostream>
using namespace std;

int main(){
  int n, i;
  cin >> n;
  int arr[n];
  for(i=0;i<n;i++){
    cin >> arr[i];
  }
  
  for(i=0;i<n/2;i++){
    int temp = arr[n-i-1];
    arr[n-i-1] = arr[i];
    arr[i] = temp;
  }
  
  for(i=0;i<n;i++){
    cout << arr[i];
  }
}

//Find the matrix multiplication

#include<iostream>
using namespace std;
int main(){
  int n1, m1, n2, m2, i, j, k;
  cout << "Enter the number of rows and columns for 1st matrix: ";
  cin >> n1 >> m1;
  int arr1[n1][m1];
  
  cout << "Enter the number of rows and columns for 2nd matrix: ";
  cin >> n2 >> m2;
  int arr2[n2][m2];
  
  for(i=0;i<n1;i++){
    for(j=0;j<m1;j++){
      cin >> arr1[i][j];
    }
  } 
  for(i=0;i<n2;i++){
    for(j=0;j<m2;j++){
      cin >> arr2[i][j];
    }
  }
  int arr3[n1][m2] = {0};
  if(m1==n2){
    for(i=0;i<n1;i++){
      for(j=0;j<m2;j++){
        for(k=0;k<m1;k++){
          arr3[i][j] += arr1[i][k] * arr2[k][j]; 
        }
      }
    }
  }
  else{
    cout <<"Matrix Multiplication is not possible";
  }
  for(i=0;i<n1;i++){
    for(j=0;j<m2;j++){
      cout<<arr3[i][j]<< " ";
    }
    cout<<endl;
  }
}

//Find the Transpose of a matrix

#include<iostream>
using namespace std;

int main(){
  int n, m, i, j;
  cout<<"Enter the number of rows and columns: ";
  cin>>n>>m;
  int arr[n][m];
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
       int temp = arr[i][j];
       arr[i][j] = arr[j][i];
       arr[j][i] = temp;
    }
  }
  
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cout<<arr[j][i]<< " ";
    }
    cout<<endl;
  }
}