#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string num1, num2;
        cin >> num1 >> num2;
        string ans = "";
        for (int r = num2.length() - 1; r < num1.length(); r++)
        {
            int count = 0;
            while (true)
            {
                bool first = true;
                for (int i = 0; i <= r; i++)
                {
                    if (num1[i] - '0' > num2[i] - '0')
                    {
                        break;
                    }
                    else if (num1[i] - '0' < num2[i] - '0')
                    {
                        first = false;
                        break;
                    }
                }
                if (first)
                {
                    int carry = 0;
                    for (int i = r; i >= 0; i--)
                    {
                        int top = num1[i] - '0' + carry, bot = num2[i] - '0', diff;
                        if (top < bot)
                        {
                            top += 10;
                            carry = -1;
                            diff = top - bot;
                            num1[i] = char('0' + diff);
                        }
                        else
                        {
                            num1[i] = char((top - bot) + '0');
                            carry = 0;
                        }
                    }
                }
                else
                {
                    break;
                }
                count++;
            }
            num2 = '0' + num2;
            ans += char(count + '0');
        }
        int i = 0;
        for (; i < ans.length(); i++)
        {
            if (ans[i] != '0')
                break;
        }
        if (i == ans.length())
            cout << '0';
        for (; i < ans.length(); i++)
        {
            cout << ans[i];
        }
        cout << endl;
        i = 0;
        for (; i < num1.length(); i++)
        {
            if (num1[i] != '0')
                break;
        }
        if (i == num1.length())
            cout << '0';
        for (; i < num1.length(); i++)
        {
            cout << num1[i];
        }
        if (n != 0)
            cout << "\n\n";
        else
            cout << endl;
    }
    return 0;
}