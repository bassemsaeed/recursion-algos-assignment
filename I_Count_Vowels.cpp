#include <iostream>
#include <string>
using namespace std;

int count_vowels(string s, int i) {
  if (i == s.length())
    return 0;

  char c = tolower(s[i]);
  int is_v = 0;

  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    is_v = 1;
  }

  return is_v + count_vowels(s, i + 1);
}

int main() {
  string s;
  getline(cin, s);
  cout << count_vowels(s, 0) << "\n";
  return 0;
}
