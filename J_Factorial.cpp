#include <iostream>

using namespace std;

int fact(int);

int main(void) {

  int n_to_factor;
  cout << "enter a number: ";
  cin >> n_to_factor;

  int result = fact(n_to_factor);
  cout << "facotrial of " << n_to_factor << " is equal to -> " << result
       << endl;

  return 0;
}

int fact(int n) {

  if (n <= 1)
    return 1;
  return n * fact(n - 1);
}
