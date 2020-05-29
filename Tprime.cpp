#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    long x;
    cin>>n;
   for(int a=0;a<n;a++)
   {
       int cnt=0;
       cin>>x;
       for(long i=1;i<=x;i++)
       {
           if(x%i==0)
           cnt++;
       }
       if(cnt==3)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
   }
    return 0;
}