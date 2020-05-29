

#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    
     cin>>n;
    int mat[n];
  
   for(int i=0;i<n;i++)
   {
       cin>>mat[i];
       sum=sum+mat[i];
   }
   
   int cnt=0;
   int count=0;
   for(int i=0;i<n;i++)
   {
       count++;
       cnt=cnt+mat[i];
       if(cnt>(sum-cnt))
            break;
   }
   cout<<count;
}