#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int convert(const string &x, const unordered_map<string, int> &table)
{
    try
    {
        return stoi(x);
    }
    catch (const invalid_argument &e)
    {
        auto it = table.find(x);
        if (it != table.end())
        {
            return it->second;
        }
    }
    throw runtime_error("Invalid token");
}

int main()
{
    unordered_map<string, int> table = {
        {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"ten", 10}, {"un", 1}, {"deux", 2}, {"trois", 3}, {"quatre", 4}, {"cinq", 5}, {"seis", 6}, {"sept", 7}, {"huit", 8}, {"neuf", 9}, {"dix", 10}, {"一", 1}, {"二", 2}, {"三", 3}, {"四", 4}, {"五", 5}, {"六", 6}, {"七", 7}, {"八", 8}, {"九", 9}, {"十", 10}};
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        istringstream iss(line);
        string a, b;
        iss >> a >> b;
        cout << convert(a, table) + convert(b, table) << endl;
    }
    return 0;
}