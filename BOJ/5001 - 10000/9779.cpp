#include <iostream>
#include <string>
#include <regex>
using namespace std;

int reg(string a) {
    regex r("da+dd?(i|y)");
    return regex_match(a, r);
}

int main(void) {
    string a;
    while (cin >> a) {
        cout << (reg(a) ? "She called me!!!" : "Cooing") << "\n";
    }
    return 0;
}