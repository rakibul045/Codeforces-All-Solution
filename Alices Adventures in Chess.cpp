#include <iostream>
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
         int flag=0;
         for(int i=0; i<=100; i++)
         {
             if(x==a && y==b)
             {
                 flag=1;
                 break;
             }
             if(str[i%n] == 'N')
             {
                 y++;
             }
             else if(str[i%n] == 'E')
             {
                 x++;
             }
             else if(str[i%n] == 'S')
             {
                 y--;
             }
             else if(str[i%n] == 'W')
             {
                 x--;
             }
         }
         if(flag)
            cout<< "YES" <<endl;
         else
            cout<< "NO" <<endl;
     }
     return 0;
 }
