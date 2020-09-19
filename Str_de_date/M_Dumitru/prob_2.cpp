#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main ()
{
  int unsigned n;
  int k;
  string n_string;
  string k_string;
  string n_after_match;

  cout << "n = ";
  cin >> n;

  cout << "Se repeta urmatoarele cifre: ";
  while (n > 0) {

    k = n % 10;
    n /= 10;
    n_string = to_string(n);
    k_string = to_string(k);
    regex pattern(k_string);

    if (n_string.find(k_string) != -1) {
      cout << k << " ";
      n_after_match = regex_replace(n_string, pattern, "");

      if (n_after_match != "") {
        n = stoi(n_after_match);  
      } else {
        n = 0;
      }
    }
  }

  cout << "\n";

  return 0;
}