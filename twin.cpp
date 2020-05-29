

#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,cnt=0,count=0;
    
     cin>>n;
    int mat[100];
  
   for(int i=0;i<n;i++)
   {
       cin>>mat[i];
       sum=sum+mat[i];
   }
   
   for(int i=0;i<n;i++)
   {
       count++;
       cnt=cnt+mat[i];
       if(cnt>(sum-cnt))
            break;
   }
   cout<<count;
}