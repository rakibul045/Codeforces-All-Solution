#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;


    vector<vector<int>> arrays(n);

    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; ++j)
        {
            cin >> arrays[i][j];
        }
    }


    for (int q_i = 0; q_i < q; ++q_i)
    {
        int i, j;
        cin >> i >> j;
        cout << arrays[i][j] << endl;
    }

    return 0;
}

