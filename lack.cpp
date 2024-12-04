#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int v=0, u=0;
        v=a[0]+a[1]+a[2];
        u=a[3]+a[4]+a[5];
        if(v==u)
        {

            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}
