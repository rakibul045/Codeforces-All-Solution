#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int modulo = 998244353;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> l(n), r(n);

        // Reading input intervals
        for (int i = 0; i < n; ++i) {
            cin >> l[i] >> r[i];
        }

        // Sort intervals based on `l` or `r` to optimize processing
        vector<pair<int, int>> intervals(n);
        for (int i = 0; i < n; ++i) {
            intervals[i] = {l[i], r[i]};
        }
        sort(intervals.begin(), intervals.end());

        // Compute the total_score using an optimized approach
        int total_score = 0;
        for (int i = 0; i < n; ++i) {
            int max_l = intervals[i].first;
            int min_r = intervals[i].second;

            for (int j = i + 1; j < n; ++j) {
                max_l = max(max_l, intervals[j].first);
                min_r = min(min_r, intervals[j].second);

                if (max_l > min_r) {
                    total_score = (total_score + (max_l - min_r)) % modulo;
                }
            }
        }

        cout << total_score << endl;
    }
    return 0;
}
