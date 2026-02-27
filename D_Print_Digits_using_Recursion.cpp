#include <iostream>
using namespace std;

void print_digits(string n, int idx) {
  if (idx == n.length())
    return;
  cout << n[idx] << " ";
  print_digits(n, idx + 1);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string n;
    cin >> n;
    print_digits(n, 0);
    cout << "\n";
  }
  return 0;
}
