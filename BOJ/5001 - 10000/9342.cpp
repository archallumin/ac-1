#include <iostream>
#include <regex>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    regex r("[A-F]?A+F+C+[A-F]?");
    while (t--) {
        string a;
        cin >> a;
        cout << (regex_match(a, r) ? "Infected!" : "Good") << "\n";
    }
    return 0;
}