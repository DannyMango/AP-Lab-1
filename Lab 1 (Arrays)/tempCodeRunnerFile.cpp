#include <iostream>
using namespace std;

int main() {
  int arr[5] = {-3, -1, 0, 2, 8};
  int count = 0, i = 0;
  while (arr[i] != "\0") {
    count++;
    i++;
  }
  
  cout << count;
  return 0;
}