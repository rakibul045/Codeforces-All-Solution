
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int up=0,lo=0;
    string s;
    cin>>s;
    for(char c : s)
    {
        if(isupper(c))
        {
            up++;
        }
        else
        {
            lo++;
        }
    }
    if(up>lo)
    {
        for(char &c : s)
        {
            c = toupper(c);
        }

    }
    else
    {
        for(char &c : s)
        {
            c = tolower(c);
        }

    }
    cout<<s<<endl;
    return 0;
}
