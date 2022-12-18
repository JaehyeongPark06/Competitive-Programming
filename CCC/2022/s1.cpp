#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios.base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  int ans = 0;
  cin >> N;
  while (N >= 0) {
    if (N % 5 == 0) {
      ans++;
    } 
    N -= 4;
  }
  cout << ans << endl;
}