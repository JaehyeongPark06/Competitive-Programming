#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, x;
    cin >> s >> x;
    int egg = ((s + 2) * 3) + 16;
    if (egg <= x)
    {
        cout << "Yes it fits!" << endl;
    }
    else
    {
        cout << "No, it's too small :(" << endl;
    }
    return 0;
}