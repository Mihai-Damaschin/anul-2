#include <iostream>
#include <stdlib.h>  

using namespace std;


int main () {
    int n;

    cout << "Introdu un numar";
    cin >> n;

    cout << "Cifra zecilor este: " << ((n % 10) / 10);

    return 0;
}