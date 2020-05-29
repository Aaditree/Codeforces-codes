#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,t;
  cin>>n>>t;
  int mat[300001];
  for(int i=0;i<n-1;i++)
  cin>>mat[i];
  int sum=0;
  int flag=0;
  for(int i=0;i<n-1;)
  {
      sum=i+1;
      if(sum==t)
      {
          flag=1;break;
      }
      else
      i=i+mat[i];
  }
  if(flag==1)
  cout<<"YES";
  else
  cout<<"NO";
  
    return 0;
}