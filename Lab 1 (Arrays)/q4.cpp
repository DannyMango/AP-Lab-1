// Take an array and find the max subarray sum

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int* arr, int n) {
  int maxSum = INT_MIN;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    maxSum = max(maxSum, sum);
    if (sum < 0) {
      sum = 0;
    }
    
  }
