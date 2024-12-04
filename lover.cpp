#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        if(s.size()==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<s.substr(0,2)<<endl;
        }
    }
}

