#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int A = 0;
    int B = 0;
    unordered_map<string, int> m;
    m["A"] = A;
    m["B"] = B;

    while (true)
    {
        string input, cmd;
        getline(cin, input);
        vector<string> cmds;
        istringstream iss(input);
        while (iss >> cmd)
        {
            cmds.push_back(cmd);
        }
        if (cmds[0] == "1")
        {
            m[cmds[1]] = stoi(cmds[2]);
        }
        else if (cmds[0] == "2")
        {
            cout << m[cmds[1]] << endl;
        }
        else if (cmds[0] == "3")
        {
            m[cmds[1]] = m[cmds[1]] + m[cmds[2]];
        }
        else if (cmds[0] == "4")
        {
            m[cmds[1]] = m[cmds[1]] * m[cmds[2]];
        }
        else if (cmds[0] == "5")
        {
            m[cmds[1]] = m[cmds[1]] - m[cmds[2]];
        }
        else if (cmds[0] == "6")
        {
            m[cmds[1]] = m[cmds[1]] / m[cmds[2]];
        }
        else if (cmds[0] == "7")
        {
            break;
        }
    }
    return 0;
}