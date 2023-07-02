#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int k, m;
    cin >> k >> m;
    vector<int> v(m), rem(k);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++)
    {
        rem[i] = i + 1;
    }
    for (int idx : v)
    {
        vector<int> del;
        for (int i = 0; i < rem.size(); i++)
        {
            if ((i + 1) % idx == 0)
            {
                del.push_back(rem[i]);
            }
        }
        for (int idx : del)
        {
            rem.erase(remove(rem.begin(), rem.end(), idx), rem.end());
        }
    }
    for (int idx : rem)
    {
        cout << idx << endl;
    }
    return 0;
}