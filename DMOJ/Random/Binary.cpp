#include <bits/stdc++.h>
using namespace std;

string decToBin(int n)
{
    if (n == 0)
    {
        return "0000";
    }

    string b = "";
    while (n)
    {
        b = to_string(n % 2) + b;
        n /= 2;
    }

    b = string((3 - (b.length() - 1) % 4), '0') + b;

    string result = "";
    for (size_t i = 0; i < b.length(); i += 4)
    {
        result += b.substr(i, 4) + " ";
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << decToBin(n) << endl;
    }

    return 0;
}
