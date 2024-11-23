#include <iostream>
#include <regex>
using namespace std;

int main(void) {
    int t;
    string st;
    cin >> t >> st;
    st.replace(st.find("*"), 1, "[a-z]*");
    regex r(st);
    while (t--) {
        string a;
        cin >> a;
        cout << (regex_match(a, r) ? "DA" : "NE") << "\n";
    }
    return 0;
}