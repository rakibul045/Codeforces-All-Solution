#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string s;
        cin>>s;
        if (s.size()==1)
        {
            cout <<-1<<endl;
        }
        else
        {
            if(s.size()>= 4)
            {
                cout<< s.substr(1,4)<<endl;
            }
            else
            {
                cout<<s<<endl;
            }
        }
    }

    return 0;
}

