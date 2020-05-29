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
       int cnt=2;
       cin>>x;
       for(long i=2;i<=x/2+1;i++)
       {
           if(i==((long)(sqrt(x))))
           {cnt++;
           break;}
       }
       if(cnt==3)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
   }
    return 0;
}