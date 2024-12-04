#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin >> t;
     while(t--)
     {
         int n,a,b;
         cin>>n>>a>>b;
         string str;
         cin>>str;
         int x=0, y=0;
         bool found = false;

         for(int i=0; i<=100; i++)
         {
             if(x==a && y==b)
             {
                 found = true;
                 break;
             }

             char move = str[i % n];
             if(move == 'N')
             {
                 y++;
             }
             else if(move == 'E')
             {
                 x++;
             }
             else if(move == 'S')
             {
                 y--;
             }
             else if(move == 'W')
             {
                 x--;
             }
         }
         if(found)
            cout<< "YES" <<endl;
         else
            cout<< "NO" <<endl;
     }
     return 0;
 }

