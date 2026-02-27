#include <iostream>
using namespace std;

void print_c(int k, char c) {
  if (k <= 0)
    return;
  cout << c;
  print_c(k - 1, c);
}

void inv_pyramid(int r, int n) {
  if (r == 0)
    return;
  print_c(n - r, ' ');
  print_c(2 * r - 1, '*');
  cout << "\n";
  inv_pyramid(r - 1, n);
}

int main() {
  int n;
  cin >> n;
  inv_pyramid(n, n);
  return 0;
}
