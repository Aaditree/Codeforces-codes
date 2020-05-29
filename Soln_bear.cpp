

#include <iostream>

using namespace std;

int main()
{
    int a,b,count = 0,ans=0;
   cin>>a>>b;
   while(ans==0)
   {
       
       a = a*3;
       b = b *2;
       count++;
       if(a>b)
       {
           ans=1;
       }
       
   }
   cout<<count;
}