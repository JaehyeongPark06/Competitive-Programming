#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first < b.first)
        return true;
    else if (a.first > b.first)
        return false;
    else if (a.second < b.second)
        return true;
    else if (a.second > b.second)
        return false;
    return false;
}

int main()
{
    int l, n;
    cin >> l >> n;

    vector<pair<int, int>> x;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        x.push_back(make_pair(a, b));
    }

    sort(x.begin(), x.end(), compare);

    int maxdis = 0;
    int lb = 0;
    for (const auto &c : x)
    {
        maxdis = max(maxdis, c.first - lb);
        lb = max(lb, c.second);
    }

    maxdis = max(maxdis, l - lb);
    cout << maxdis << endl;

    return 0;
}