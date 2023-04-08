#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
#define ll long long

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<vector<char>> grid(n, vector<char>(5));
  int day1 = 0, day2 = 0, day3 = 0, day4 = 0, day5 = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> grid[i][j];
      if (grid[i][j] == 'Y')
      {
        if (j == 0)
          day1++;
        if (j == 1)
          day2++;
        if (j == 2)
          day3++;
        if (j == 3)
          day4++;
        if (j == 4)
          day5++;
      }
    }
  }
  int ans = 0;
  ans = max(ans, day1);
  ans = max(ans, day2);
  ans = max(ans, day3);
  ans = max(ans, day4);
  ans = max(ans, day5);
  // Check if more than one day has the same max
  vector<int> pp;
  int count = 0;
  if (day1 == ans)
  {
    count++;
    pp.push_back(1);
  }
  if (day2 == ans)
  {
    count++;
    pp.push_back(2);
  }
  if (day3 == ans)
  {
    count++;
    pp.push_back(3);
  }
  if (day4 == ans)
  {
    count++;
    pp.push_back(4);
  }

  if (day5 == ans)
  {
    count++;
    pp.push_back(5);
  }
  if (count > 1) // More than one day has the same max
  {
    // Output days seperated by comma
    for (int i = 0; i < pp.size(); i++)
    {
      cout << pp[i];
      if (i != pp.size() - 1)
        cout << ",";
    }
    cout << endl;
  }
  else
  {
    cout << pp[0] << endl;
  }
  return 0;
}