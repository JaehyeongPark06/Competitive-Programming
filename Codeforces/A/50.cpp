#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll M, N;
    ll da = 2;
    scanf("%lld%lld", &M, &N);
    ll area = M * N;
    if (area % 2 == 0)
    {
        printf("%lld", area / 2);
    }
    else
    {
        printf("%lld", (area - 1) / 2);
    }
    return 0;
}