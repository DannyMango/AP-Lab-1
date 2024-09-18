/*
Print the following patterns

1
2 3
4 5 6
7 8 9 10

A
B C
D E F
G H I J
*/

#include <bits/stdc++.h>
using namespace std;

int numPattern(int n) {
  int num = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
  return 0;
}

int alphaPattern(int n) {
  char ch = 'A';
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
  return 0;
}

int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  numPattern(n);
  alphaPattern(n);
  return 0;
}