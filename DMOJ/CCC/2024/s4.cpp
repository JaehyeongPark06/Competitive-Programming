#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void dfs(int node, int state, vector<vector<pair<int, int>>> &adj, vector<char> &ans, vector<bool> &vis)
{
    for (auto &p : adj[node])
    {
        int neigh = p.first;
        int index = p.second;
        if (vis[neigh])
            continue;
        vis[neigh] = true;

        if (ans[index] == 'G')
        {
            if (state == 0)
            {
                ans[index] = 'R';
            }
            else
            {
                ans[index] = 'B';
            }
        }

        dfs(neigh, state ^ 1, adj, ans, vis);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    vector<vector<pair<int, int>>> adj(N + 1);
    vector<char> ans(M, 'G');
    vector<bool> vis(N + 1, false);

    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }

    for (int n = 1; n <= N; n++)
    {
        if (!vis[n])
        {
            vis[n] = true;
            dfs(n, 0, adj, ans, vis);
        }
    }

    for (auto &c : ans)
        cout << c;
    cout << endl;

    return 0;
}
