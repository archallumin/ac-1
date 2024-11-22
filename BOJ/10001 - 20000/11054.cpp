#include <iostream>
using namespace std;

int arr[1001];
int dp[1001], dp2[1001];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int res = -1;
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> arr[i];
  }
  // LIS
  for (int i = 0; i < t; i++) {
    dp[i] = 1;
    for (int j = 0; j < i; j++) {
      if (arr[j] < arr[i]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }
  for (int i = t - 1; i >= 0; i--) {
    dp2[i] = 1;
    for (int j = t - 1; j >= i; j--) {
      if (arr[j] < arr[i]) {
        dp2[i] = max(dp2[i], dp2[j] + 1);
      }
    }
  }
  // LIS END
  for (int i = 0; i < t; i++) {
    if (res < dp[i] + dp2[i] - 1)
      res = dp[i] + dp2[i] - 1;
  }
  cout << res << "\n";
  return 0;
}