#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cons = "bcdfghjklmnpqrstvwxyz";
    string vowe = "aaeeeiiiiooooouuuuuuu";
    string nex = "cdfghjklmnpqrstvwxyzz";

    string s;
    cin >> s;
    string convert = "";
    for (char c : s)
    {
        size_t i = cons.find(c);
        convert += c;
        if (i != std::string::npos)
        {
            convert += vowe[i];
            convert += nex[i];
        }
    }
    cout << convert << endl;
    return 0;
}