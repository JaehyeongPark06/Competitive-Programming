#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n;
    cin >> n;
    vector<string> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int i = 0;
    string s = "good";
    while (i < n && s == "good")
    {
        auto idx = find(a.begin(), a.end(), b[i]) - a.begin();
        if (a[i] != b[idx] || idx == i)
        {
            s = "bad";
        }
        i++;
    }
    cout << s << endl;
    return 0;
}
