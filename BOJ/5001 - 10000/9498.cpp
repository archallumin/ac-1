#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  if (a >= 90)
    cout << "A\n";
  else if (a >= 80)
    cout << "B\n";
  else if (a >= 70)
    cout << "C\n";
  else if (a >= 60)
    cout << "D\n";
  else
    cout << "F\n";
  return 0;
}