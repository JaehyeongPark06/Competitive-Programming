#include <bits/stdc++.h>
using namespace std;

int countDistinct(string str)
{
    unordered_set<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }
    return s.size();
}

int main()
{
    string p;
    cin >> p;
    if (countDistinct(p) % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}