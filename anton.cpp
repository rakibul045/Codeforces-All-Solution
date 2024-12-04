#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int t_f=0;

    while(n--)
    {
        string a;
        cin>>a;

        if(a=="Tetrahedron")
            t_f+= 4;

        else if(a=="Cube")
            t_f+= 6;

        else if(a=="Octahedron")
            t_f+= 8;

        else if(a=="Dodecahedron")
            t_f+= 12;

        else if(a=="Icosahedron")
            t_f+= 20;
    }
    cout<<t_f<<endl;
}

