// Check given string is a palindrome or not

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter string: " << endl;
  cin >> s;

  int n = s.length();
  for (int i = 0; i < n; i++) {
    if (s[i] != s[n - i - 1]) {
      cout << "Given string is not a palindrome";
      break;
    }
    else {
      continue;
    }
  }
  return 0;
}