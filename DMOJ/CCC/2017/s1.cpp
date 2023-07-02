#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n, k = 0, acount = 0, bcount = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        acount += a[i];
        bcount += b[i];
        if (acount == bcount)
            k = i + 1;
    }
    cout << k << endl;
    return 0;
}