#include <iostream>
using namespace std;

void print_1_to_n(int n) {
  if (n == 0)
    return;

  print_1_to_n(n - 1); // Recurse first
  cout << n << "\n";   // Print on the way back up
}

int main() {
  int n;
  cin >> n;
  print_1_to_n(n);
  return 0;
}
