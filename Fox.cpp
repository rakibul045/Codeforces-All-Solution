
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        if(i%4==1)
        {
            cout<<string(m,'#')<<endl;
        }
        else if(i%4==2)
        {
            cout<<string(m-1,'.')+"#"<<endl;

        }
        else if(i%4==0)
        {
            cout<<"#" + string(m-1,'.')<<endl;
        }

    }
    return 0;

}
