#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> cities;
    vector<int> temps;
    string s;
    int n;
    while (s != "Waterloo")
    {
        cin >> s >> n;
        cities.push_back(s);
        temps.push_back(n);
    }
    int mx = temps[0], idx;
    for (int i = 0; i < cities.size(); i++)
    {
        if (temps[i] < mx)
        {
            mx = temps[i];
            idx = i;
        }
    }
    cout << cities[idx] << endl;
    return 0;
}