#include <iostream>
using namespace std;

int main(void) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  for (int i = 0; i <= d; i++) {
    for (int j = 0; j <= d; j++) {
      for (int k = 0; k <= d; k++) {
        if (a * i + b * j + c * k == d) {
          cout << 1 << "\n";
          return 0;
        }
      }
    }
  }
  cout << 0 << "\n";
  return 0;
}