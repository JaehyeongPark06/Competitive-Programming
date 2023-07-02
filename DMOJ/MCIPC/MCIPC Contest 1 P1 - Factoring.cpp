#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int d = (a + sqrt(a * a - 4 * b)) / 2;
    int c = a - d;
    cout << c << " " << d << endl;
    return 0;
}