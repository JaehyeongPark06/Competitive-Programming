#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    stack<int> st;

    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        if (n > 0)
        {
            st.push(n);
        }
        else
        {
            st.pop();
        }
    }
    int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    cout << sum << endl;
    return 0;
}