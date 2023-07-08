#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int sizes[1000];
string s[1000];

bool check(string a, string b)
{
    stringstream ss1(a);
    stringstream ss2(b);
    int temp1[3], temp2[3];
    for (int i = 0; i < 3; i++)
    {
        ss1 >> temp1[i];
        ss2 >> temp2[i];
    }
    sort(temp1, temp1 + 3);
    sort(temp2, temp2 + 3);
    for (int i = 0; i < 3; i++)
    {
        if (temp1[i] > temp2[i])
            return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        int a, b, c;
        ss >> a >> b >> c;
        s[i] = to_string(a) + " " + to_string(b) + " " + to_string(c);
        sizes[i] = a * b * c;
    }
    int tc;
    cin >> tc;
    cin.ignore();
    for (int i = 0; i < tc; i++)
    {
        bool found = false;
        string line;
        getline(cin, line);
        stringstream ss(line);
        int x, y, z;
        ss >> x >> y >> z;
        string temp = to_string(x) + " " + to_string(y) + " " + to_string(z);
        int ans = INT_MAX;
        for (int j = 0; j < N; j++)
        {
            if (check(temp, s[j]))
            {
                ans = min(sizes[j], ans);
                found = true;
            }
        }
        if (!found)
            cout << "Item does not fit." << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
