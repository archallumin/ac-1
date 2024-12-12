#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    while (a.find(b) != string::npos)
      a.replace(a.find(b), b.length(), "*");
    cout << a.length() << "\n";
  }
  return 0;
}