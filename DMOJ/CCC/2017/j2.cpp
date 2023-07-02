#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 0; i <= k; i++)
    {
        sum += n * pow(10, i);
    }
    cout << sum << endl;
    return 0;
}