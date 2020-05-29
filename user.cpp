#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m[1001];
  for(int i=0;i<n;i++)
  {
      cin>>m[i];
  }
  
  int count=0;
  for(int i=1;i<n;i++)
  {
      if(m[i]<m[i-1])
      {
          int flag=0;
          for(int j=i-1;j>=0;j--)
          {
              if(m[i]<m[j])
              continue;
              else
              flag=1;
          }
          if(flag==0)
          count++;
      }
  }
  
  for(int i=1;i<n;i++)
  {
      if(m[i]>m[i-1])
      {
          int flag=0;
          for(int j=i-1;j>=0;j--)
          {
              if(m[i]>m[j])
              continue;
              else
              flag=1;
          }
          if(flag==0)
          count++;
      }
  }
  
  cout<<count;
  return 0;
  
}