#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a=240-k;

    int c=0;
    int count=0;
    for (int i=1; i<=n;++i)
    {
        c+=5*i;
        if(c>a)
        {
            break;
        }
        count++;
    }
    cout<<count<<endl;
}

