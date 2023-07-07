#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

long long Dijkstra(const vector<vector<tuple<int, int, int>>> &adj, int u, int v)
{
    int n = adj.size();
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
    pq.emplace(0, u);
    vector<long long> dist(n, 1e18);
    dist[u] = 0;
    while (!pq.empty())
    {
        int val = pq.top().second;
        pq.pop();
        for (auto [nxt, l, c] : adj[val])
        {
            if (dist[nxt] > dist[val] + l)
            {
                dist[nxt] = dist[val] + l;
                pq.emplace(dist[nxt], nxt);
            }
        }
    }
    return dist[v];
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    vector<vector<tuple<int, int, int>>> adj(n);
    vector<tuple<int, int, int, int>> edges(m);
    long long ans = 0;
    for (int i = 0; i < m; i++)
    {
        int u, v, l, c;
        scanf("%d%d%d%d", &u, &v, &l, &c);
        --u;
        --v;
        edges[i] = {l, c, u, v};
        adj[u].emplace_back(v, l, c);
        adj[v].emplace_back(u, l, c);
        ans += c;
    }
    sort(edges.begin(), edges.end(), greater<>());
    for (auto [l, c, u, v] : edges)
    {
        adj[u].erase(remove(adj[u].begin(), adj[u].end(), make_tuple(v, l, c)), adj[u].end());
        adj[v].erase(remove(adj[v].begin(), adj[v].end(), make_tuple(u, l, c)), adj[v].end());
        long long sd = Dijkstra(adj, u, v);
        if (sd <= l)
        {
            ans -= c;
        }
        else
        {
            adj[u].emplace_back(v, l, c);
            adj[v].emplace_back(u, l, c);
        }
    }
    cout << ans << endl;
    return 0;
}