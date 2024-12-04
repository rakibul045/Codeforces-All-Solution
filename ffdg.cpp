#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long r, g, b;
        cin >> r >> g >> b;


        long long max_lamps = max({r, g, b});


        if (r + g + b - max_lamps >= max_lamps - 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
