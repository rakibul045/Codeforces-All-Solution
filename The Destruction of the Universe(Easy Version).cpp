#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int modulo = 998244353;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>l(n), r(n);
        for(int i=0; i<n; ++i)
        {
            cin>>l[i] >> r[i];
        }
        int total_score=0;
        for(int mask=1; mask < (1<<n); ++mask)
        {
            int max_l=0, min_r=n+1;
            int expansions=0;
            for(int i=0; i<n; ++i)
            {
                if(mask & (1 << i))
                {
                    max_l=max(max_l, l[i]);
                    min_r=min(min_r, r[i]);
                }
            }
            if(max_l > min_r)
            {
                expansions=max_l - min_r;
            }
            total_score=(total_score + expansions) % modulo;
        }
        cout<<total_score <<endl;
    }
    return 0;
}
