

#include <iostream>

using namespace std;

int main()
{
    int k,n,w,cost=0;
   cin>>k>>n>>w;
   for(int i=1;i<=w;i++)
   {
       cost=cost+ i*k;
   }
   
   cost = cost - n;
   
   if(cost>0)
   cout<<cost;
   else
   cout<<"0";
}