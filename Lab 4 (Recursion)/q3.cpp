// Implement binary search using recursion
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int left, int right) {
  if (left <= right) {
    int mid = (left + right) / 2;
    if (arr[mid] == x) {
      return mid;
    }
    if (arr[mid] > x) {
      return binarySearch(arr, x, left, mid - 1);
    }
    return binarySearch(arr, x, mid + 1, right);
  }
  return 0;
}

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int result = binarySearch(arr, 5, 0, 9);

  cout << "Element found at index " << result;
}