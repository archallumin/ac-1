#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  vector<int> arr;
  int a, b;
  cin >> a >> b;
  b %= 10;
  for (int i = 1; i <= a; i++) {
    if (i % 10 != b && i % 10 != (b * 2) % 10)
      arr.push_back(i);
  }
  cout << arr.size() << "\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}