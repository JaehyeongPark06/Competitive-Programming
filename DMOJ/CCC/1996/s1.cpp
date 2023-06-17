#include <bits/stdc++.h>

using namespace std;

void solve(int num)
{
    int count = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            count += i;
        }
        else
        {
            continue;
        }
    }
    if (count > num)
        cout << num << " is an abundant number." << endl;
    else if (count == num)
        cout << num << " is a perfect number." << endl;
    else
    {
        cout << num << " is a deficient number." << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        solve(arr[i]);
    }
    return 0;
}