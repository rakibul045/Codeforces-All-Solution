#include <iostream>
using namespace std;

void solve()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n;
        cin >>n;
        int sequence[50];
        int start=2;
        for (int i=0; i<n; ++i)
        {
            while(true)
            {
                bool valid=true;
                for (int j=0; j<i; ++j)
                {
                    if((start%(j+1))==(sequence[j]%(j+1)))
                    {
                        valid=false;
                        break;
                    }
                }
                if(valid)
                {
                    sequence[i]=start;
                    break;
                }
                ++start;
            }
        }
        for(int i=0; i<n; ++i)
        {
            cout<<sequence[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}

