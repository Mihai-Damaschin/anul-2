#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main ()
{
    regex pattern("7");

    cout 
        << "\n"
        << regex_replace( "77", pattern, "") 
        << "\n";

  return 0;
}