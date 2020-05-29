

#include <iostream>

using namespace std;

int main()
{
    int n;
   cin>>n;
   if(n%4==0||n%7==0)
   cout<<"YES";
   else if(n%10==4||n%10==7)
   {
       int r=0;
       while(n!=0)
       {
           int rem = n%10;
           if(rem==4||rem==7)
           n=n/10;
           else
           {
               cout<<"NO";
               r=1;
               break;
           }
           
       }
       if(r==0)
       cout<<"YES";
   }
   else
   cout<<"NO";
}