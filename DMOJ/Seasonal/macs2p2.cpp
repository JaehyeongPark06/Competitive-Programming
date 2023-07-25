#include <bits/stdc++.h>
using namespace std;

int get_hash(string s)
{
    int hash = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        hash = hash * 13 + s[i] - 'a' + 1;
    }
    return hash;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int count = 0;
    string password(n, 'a'); // start with the password "aaaaa..."

    while (true)
    {
        if (get_hash(password) == m)
        {
            count++;
        }

        // increment password
        int i = n - 1;
        while (i >= 0 && password[i] == 'z')
        {
            password[i] = 'a';
            i--;
        }
        if (i < 0)
            break; // done generating all passwords
        password[i]++;
    }

    cout << count << endl;
    return 0;
}
