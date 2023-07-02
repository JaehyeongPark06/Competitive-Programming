#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

bool fits(string available, string desired)
{
    if (available.empty())
    {
        return false;
    }
    if (desired == "S")
    {
        return true;
    }
    if (desired == "L")
    {
        return (available == "L");
    }
    if (desired == "M")
    {
        return (available == "M" || available == "L");
    }
    return true;
}

int main()
{
    string line;
    getline(cin, line);
    int numJerseys = stoi(line);
    getline(cin, line);
    int numAthletes = stoi(line);
    vector<string> jerseys(numJerseys);
    for (int i = 0; i < numJerseys; i++)
    {
        getline(cin, jerseys[i]);
    }

    int counter = 0;
    for (int i = 0; i < numAthletes; i++)
    {
        getline(cin, line);
        istringstream iss(line);
        string size;
        int idx;
        iss >> size >> idx;
        idx--;

        if (fits(jerseys[idx], size) && !jerseys[idx].empty())
        {
            jerseys[idx] = "";
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}