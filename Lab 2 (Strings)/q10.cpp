// Given an array of strings, find the longest common prefix among all strings

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter number of strings: " << endl;
  cin >> n;
  string s[n];
  cout << "Enter strings: " << endl;

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  string prefix = s[0];

  int minLength = s[0].length();
  for (int i = 0; i < n; i++) {
    if (s[i].length() < minLength) {
      minLength = s[i].length();
    }
  }

  for (int i = 0; i < minLength; i++) {
    for (int j = 0; j < n; j++) {
      if (s[j][i] != prefix[i]) {
        prefix = prefix.substr(0, i);
        break;
      }
    }
  }

  cout << "The longest common prefix is: " << prefix << endl;
  return 0;
}