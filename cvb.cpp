#include <bits/stdc++.h>
using namespace std;

int countDistinctSubstrings(const string &p)
{
    set<string> substrings;
    for (size_t i = 0; i < p.size(); ++i)
    {
        string temp = "";
        for (size_t j = i; j < p.size(); ++j)
        {
            temp += p[j];
            substrings.insert(temp);

    }
    return substrings.size();
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool found = false;
        for (size_t len = 1; len <= s.size(); ++len)
        {
            for (size_t start = 0; start + len <= s.size(); ++start)
            {
                string p = s.substr(start, len);
                if (countDistinctSubstrings(p) % 2 == 0)
                {
                    cout << p << "\n";
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (!found) cout << -1 << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
