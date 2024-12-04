#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        bool found=false;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==k)
            {
                found=true;
                break;
            }
        }
        if(found)
        {
            cout<<"yes"<<endl;

        }
        else
        {
            cout<<"no"<<endl;
        }


    }
}
