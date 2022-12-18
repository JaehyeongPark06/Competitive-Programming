#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int p;
  int ans = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> p;
    ans += p;
    for (int i = 0; i < N; i++) {
      cout << ans << endl;
    }
  }
  return 0;
}