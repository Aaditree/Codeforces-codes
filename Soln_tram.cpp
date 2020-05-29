

#include <iostream>

using namespace std;

int main()
{
    int a,n,b,total=0,max=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>a>>b;
       total = total - a + b;
       if(max<total)
            max = total;
   }
   cout<<max;
}