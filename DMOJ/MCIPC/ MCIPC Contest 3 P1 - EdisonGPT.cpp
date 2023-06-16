#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void toUpper(string &a)
{
    transform(a.begin(), a.end(), a.begin(), ::toupper);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    toUpper(s);
    float count = 0, ecount = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
            if (s[i] == 'E')
                ecount++;
        }
    }
    if (ecount > count / 2)
        cout << "see me after class..." << endl;
    else
        cout << "great work!" << endl;
    return 0;
}