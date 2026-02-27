#include <iostream>
using namespace std;

void to_binary(int n) {
  if (n == 0)
    return;
  to_binary(n / 2);
  cout << n % 2;
}

int main() {
  int t; // num of times to run the program
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n == 0)
      cout << 0;
    else
      to_binary(n);
    cout << "\n";
  }
  return 0;
}
