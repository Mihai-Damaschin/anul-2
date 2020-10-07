#include <iostream>
#include <string>
#include <regex>

using namespace std;

void show_if_prime(int i) {
  for (int k = 2; k <= i/2; k++) {
      
      if (i % k == 0) return;
    }

  cout << i << " ";
}

int main ()
{
  int n;

  cout << "n = ";
  cin >> n;

  cout << "Componentele prime sunt: ";

  for (int i = 3; i < n; i++) {
    show_if_prime(i);
  }

  cout << "\n";

  return 0;
}