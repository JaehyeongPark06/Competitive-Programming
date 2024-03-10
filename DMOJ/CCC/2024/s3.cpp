#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back

const int MXM = 3e5 + 1;

int A[MXM];
int l[MXM], r[MXM], val[MXM];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int N, cnt = 0;
    cin >> N;
    vector<pair<int, int>> left, right;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
    {
        int tar;
        cin >> tar;
        if (i == 0)
        {
            l[cnt] = 0;
            r[cnt] = 0;
            val[cnt] = tar;
        }
        else if (val[cnt] == tar)
            r[cnt]++;
        else
        {
            cnt++;
            l[cnt] = i;
            r[cnt] = i;
            val[cnt] = tar;
        }
    }
    cnt++;
    int c = 0;
    for (int i = 0; i < cnt; i++)
    {
        while (c < N && A[c] != val[i])
            c++;
        if (c == N)
        {
            cout << "NO" << endl;
            return 0;
        }
        if (l[i] < c)
            left.pb(pair(l[i], c));
        if (r[i] > c)
            right.pb(pair(c, r[i]));
    }

    cout << "YES" << endl;
    cout << right.size() + left.size() << endl;
    reverse(right.begin(), right.end());

    for (auto &[l, r] : left)
        cout << "L " << l << " " << r << endl;
    for (auto &[l, r] : right)
        cout << "R " << l << " " << r << endl;
    return 0;
}
