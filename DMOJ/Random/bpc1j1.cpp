#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0, n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s == "face")
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    cout << count << endl;
    return 0;
}