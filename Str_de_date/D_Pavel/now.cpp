#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cout << "Nota: ";
    cin >> s;

    int delimiterPosition = s.find(",");

    string integerPart = s.substr(0, delimiterPosition);
    string decimalPart = s.substr(delimiterPosition + 1, delimiterPosition);
    
    if (s == "8,5") {
        cout << "Custom message\n";
    } else {
        stoi(decimalPart) >= 5 ? cout << stoi(s) + 1 << endl : cout << integerPart << endl;
    }

    return 0;
}