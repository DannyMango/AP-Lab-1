// How to reverse a String without using inbuilt string reverse function

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter string to reverse: " << endl;
  cin >> s;

  for (int i = s.length() - 1; i >= 0; i--) {
    cout << s[i];
  }
  return 0;
}