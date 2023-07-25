#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

vector<pair<int, int>> dir = {{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};

const int MXM = 500005;

int n, m, k, ri, ci;
set<int> blkd[MXM], vis[MXM];
vector<int> a, b;
bool ans = true, wall = false;

void dfs(const pair<int, int> &curr)
{
    if (curr.first == 1 || curr.second == m)
        wall = 1;
    if (vis[curr.first].count(curr.second))
        return;
    vis[curr.first].insert(curr.second);
    for (pair<int, int> d : dir)
    {
        pair<int, int> next = {curr.first + d.first, curr.second + d.second};
        if (blkd[next.first].count(next.second))
            dfs(next);
    }
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> ri >> ci;
        blkd[ri].insert(ci);
        if (ci == 1)
            a.push_back(ri);
        if (ri == n)
            b.push_back(ci);
    }
    for (int r : a)
    {
        wall = 0;
        dfs({r, 1});
        if (wall)
            ans = 0;
    }
    for (int i = 0; i < MXM; i++)
        vis[i].clear();
    for (int c : b)
    {
        wall = 0;
        dfs({n, c});
        if (wall)
            ans = 0;
    }
    for (int i = 0; i < MXM; i++)
        vis[i].clear();
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}