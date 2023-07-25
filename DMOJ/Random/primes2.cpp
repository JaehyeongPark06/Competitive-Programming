#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<int> primes;

void sieve(int top)
{
    int MXM = top + 1;
    vector<bool> condition(MXM, false);

    condition[0] = true, condition[1] = true;

    int sr = sqrt(top);

    for (int i = 2; i <= sr; i++)
    {
        if (!condition[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= top; j += i)
                condition[j] = true;
        }
    }

    for (int i = sr + 1; i < MXM; i++)
        if (!condition[i])
            primes.push_back(i);
}

int main()
{
    long long bot, top;
    cin >> bot >> top;
    int diff = (int)(top - bot);
    sieve((int)sqrt(top));
    vector<bool> condition(diff, false);

    for (int prime : primes)
    {
        long long start = 0;
        if (prime == bot)
        {
            start = prime;
        }
        else
        {
            start = (long long)(ceil((double)bot / prime) * prime) - bot;
        }
        if (start + bot == prime)
            start += prime;
        for (; start < diff; start += prime)
        {
            condition[start] = true;
        }
    }
    if (bot == 1)
        condition[0] = true;
    for (int i = 0; i < diff; i++)
        if (!condition[i])
            cout << bot + i << endl;
    return 0;
}