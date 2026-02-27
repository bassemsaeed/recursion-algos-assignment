#include <iostream>
using namespace std;

void print_even(int arr[], int n, int idx) {
  if (idx >= n)
    return;

  print_even(arr, n, idx + 2);
  cout << arr[idx] << " ";
}

int main() {
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    int i_val;
    cin >> i_val;
    arr[i] = i_val;
  }

  print_even(arr, n, 0);
  cout << "\n";
}
