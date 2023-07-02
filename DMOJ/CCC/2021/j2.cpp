#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n;
    cin >> n;
    int cur, mx = -1;
    string curName, mxName = "";
    while (n--)
    {
        cin >> curName >> cur;
        if (cur > mx)
        {
            mx = cur;
            mxName = curName;
        }
    }
    cout << mxName << endl;
    return 0;
}