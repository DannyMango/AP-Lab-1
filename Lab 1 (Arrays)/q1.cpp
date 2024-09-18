// Take an array of negative and positive integers, square each element and arrange them in sorted order using two pointer approach

#include <bits/stdc++.h>
using namespace std;

int arrSort(int* arr, int n) {
  int tempArr[n];
  int left = 0;
  int right = n - 1;
  int index = n - 1;
  while (left <= right) {
    if (abs(arr[left]) > abs(arr[right])) {
      tempArr[index--] = arr[left] * arr[left];
      left++;
    } else {
      tempArr[index--] = arr[right] * arr[right];
      right--;
    }
  }
  for (int i = 0; i < n; i++) {
    arr[i] = tempArr[i];
  }
  return 0;
}

int main() { 
  int arr[5] = {-4, -1, 0, 2, 8}; 

  arrSort(arr, 5);

  cout << "Sorted array: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
