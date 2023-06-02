#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    map<string, int> shapes = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        count += shapes[s];
    }
    cout << count << endl;
    return 0;
}