#include<iostream>
using namespace std;
int main()
{
    int i,j,k,m,n,t,x;
    cin>>t;
    while(t--)
    {
       cin>>n;
        int mn[n+n]={0};
        for(i=0;i<n;i++)
        {

            for(j=0;j<n;j++)
            {
                cin>>x;
                mn[n+i-j]=min(mn[n+i-j],x);
            }
        }
        int ans=0;
        for(i=0;i<n+n;i++)
        if(mn[i]<0)ans+=-mn[i];
        cout<<ans<<'\n';
    }
}
