#include <bits/stdc++.h>
//#include <vector>
//#include <algorithm>
using namespace std;
const int MOD = 998244353;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> inter(n);
        for (int i = 0; i < n; ++i) {
            cin >> inter[i].first >> inter[i].second;
        }
        sort(inter.begin(), inter.end());
        vector<int> power_2(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            power_2[i] = (2 * power_2[i - 1]) % MOD;
        }
        int total_score = 0;
        for (int i = 0; i < n; ++i)
        {
            int max_l = inter[i].first;
            int min_r = inter[i].second;
            for (int j = i; j < n; ++j)
            {
                max_l = max(max_l, inter[j].first);
                min_r = min(min_r, inter[j].second);

                int expan = max(0, max_l - min_r);
                int sub_cont = power_2[j - i];
                total_score = (total_score + 1LL * expan * sub_cont) % MOD;
            }
        }
        cout << total_score << endl;
    }

    return 0;
}
