#include <iostream>
using namespace std;

void print_c(int k, char c) {
  if (k <= 0)
    return;
  cout << c;
  print_c(k - 1, c);
}

void pyramid(int r, int n) {
  if (r > n)
    return;
  print_c(n - r, ' ');
  print_c(2 * r - 1, '*');
  cout << "\n";
  pyramid(r + 1, n);
}

int main() {
  int n;
  cin >> n;
  pyramid(1, n);
  return 0;
}
