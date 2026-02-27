#include <iostream>

using namespace std;

void print_n_times_rec(int);

int main(void) {
  int n_times;

  cout << "enter the number of times u want to print the sentence: ";
  cin >> n_times;

  print_n_times_rec(n_times);

  return 0;
}

void print_n_times_rec(int n) {

  if (n == 0)
    return;
  cout << "i love recursion" << endl;
  print_n_times_rec(n - 1);
}
