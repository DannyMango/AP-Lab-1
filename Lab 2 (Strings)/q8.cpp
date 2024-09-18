// Check whether a palindrome can be made by rearranging a given string

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter string: " << endl;
  cin >> s;
  int odd = 0, even = 0;
  
  unordered_map<char, int> freq;
  for (int i = 0; i < s.length(); i++) {
    freq[s[i]]++;
  }
  for (auto x : freq) {
    if (x.second % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }
  if (odd > 1) {
    cout << "Not possible" << endl;
  } else {
    cout << "Possible" << endl;
  }
}