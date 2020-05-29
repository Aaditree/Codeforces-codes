#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int q[4];
   for(int i=0;i<4;i++)
   cin>>q[i];
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           if(q[i]<q[j])
           {
               int t = q[i];
               q[i]=q[j];
               q[j]=t;
           }
       }
   }
   
   int a = abs(q[3]-q[0]);
   int b = abs(q[3]-q[1]);
   int c = abs(q[3]-q[2]);
   
   cout<<a<<" "<<b<<" "<<c;
    return 0;
}