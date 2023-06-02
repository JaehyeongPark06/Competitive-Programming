#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back
#define eb emplace_back

int N;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    string s;
    cin >> s;
    if (s == "left" && N % 2 == 0)
        cout << "right" << endl;
    else if (s == "left" && N % 2 == 1)
        cout << "left" << endl;
    else if (s == "right" && N % 2 == 0)
        cout << "left" << endl;
    else
        cout << "right" << endl;
    return 0;
}