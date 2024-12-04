#include <bits/stdc++.h>
using namespace std;
int countDistinctSubstrings(const string &p)
{
    set<string> substrings;
    int n = p.size();
    for (int i = 0; i < n; ++i)
    {
        string temp = "";
        for (int j = i; j < n; ++j)
        {
            temp += p[j];
            substrings.insert(temp);
        }
    }
    return substrings.size();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            bool found = false;

            for (int len = 1; len <= s.size(); ++len)
            {
                for (int i = 0; i + len <= s.size(); ++i)
                {
                    string p = s.substr(i, len);
                    if (countDistinctSubstrings(p) % 2 == 0)   // Check if f(p) is even
                    {
                        cout << p << endl;
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
            if (!found) cout << -1 << endl;
        }
    }

    return 0;
}
