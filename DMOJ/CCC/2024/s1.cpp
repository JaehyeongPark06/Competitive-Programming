#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[(i + n / 2) % n])
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}