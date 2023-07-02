#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    char c;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> c;
        if (c == 'P')
            count++;
    }
    cout << count << endl;
    return 0;
}