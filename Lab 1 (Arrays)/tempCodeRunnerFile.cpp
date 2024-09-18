#include <bits/stdc++.h>
using namespace std;

int secondLargest(int* arr, int n) {
  int largest = INT_MIN;
  int secondLargest = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      secondLargest = largest;
      largest = arr[i];
    } 
    else if (arr[i] > secondLargest && arr[i] != largest) {
      secondLargest = arr[i];
    }
  }
  return secondLargest;
}

int main() {
  int arr[6] = {10, 20, 30, 40, 50, 60};
  cout << "Second largest element: " << secondLargest(arr, 6) << endl;
  return 0;
}