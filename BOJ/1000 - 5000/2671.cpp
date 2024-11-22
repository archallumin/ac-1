#include <iostream>
#include <string>
#include <regex>
using namespace std;

int reg(string a) {
    regex r("(100+1+|01)+");
    return regex_match(a, r);
}

int main(void) {
    string a;
    cin >> a;
    cout << (reg(a) ? "SUBMARINE" : "NOISE") << "\n";
    return 0;
}