#include <bits/stdc++.h>
using namespace std;

pair<int, int> p[100000];

int main() {
  int N;
  int ans = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> p[i].first >> p[i].second;
    if (p[i].first * 5 - p[i].second * 3 > 40) {
      ans++;
    } else {
      continue;
    }
  }
  if (ans == N) {
    cout << ans << "+" << endl;
  } else {
    cout << ans << endl;
  }

}