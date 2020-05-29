#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int ex=n;
  int sum = n;
  while(ex>=m)
  {
   sum= sum+ ex/m;
   if(ex%2==0)
   ex=ex/m;
   else
   ex=(ex+1)/m;
  }
  
  cout<<sum;
    return 0;
}