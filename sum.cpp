#include<bits/stdc++.h>
using namespace std;
void fun(int *a,int *b)
{
    int sum=*a+*b;
    int ren=abs(*a-*b);
    *a=sum;
    *b=ren;

}
int main()
{
    int a,b;
    cin>>a>>b;
    fun(&a,&b);
    cout<<a<<endl<<b<<endl;


}




