#include <iostream>
using namespace std;

int main(void) {
  int a, b, c, d, e, f;
  cin >> a >> b;
  cin >> c >> d;
  cin >> e >> f;
  if (a == e && (d + e) & 1)
    cout << "YES!\n";
  else
    cout << "NO...\n";
  return 0;
}
// https://measurezero.tistory.com/859 참고