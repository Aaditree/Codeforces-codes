#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int m[11];
  for(int i=0;i<n;i++)
  {
      m[i] = 5 *(i+1);
  }
  
  int time_remaining = 240-k;
  int sum=0,c=0;
  for(int i=0;i<n;i++)
  {
      if(sum+m[i]<=time_remaining)
      {
          sum=sum+m[i];
          c++;
      }
      
  }
  cout<<c;
  return 0;
  
}