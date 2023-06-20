#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (v[i] != v[i + 1])
            count++;
    }
    cout << 4 - count << endl;
    return 0;
}
