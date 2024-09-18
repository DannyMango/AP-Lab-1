// Find the most frequent character in a string. if multiple characters have same count, pick the smaller one.

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter string: " << endl;
  cin >> s;

  unordered_map<char, int> freq;
  for (int i = 0; i < s.length(); i++) {
    freq[s[i]]++;
  }
  int maxFreq = 0;
  char maxChar;
  for (auto x : freq) {
    if (x.second > maxFreq) {
      maxFreq = x.second;
      maxChar = x.first;
    }
  }
  cout << maxChar << " occurs " << maxFreq << " times" << endl;
  return 0;
}