#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int ex=n/m;
  int sum=n + ex;
  while(ex>=m)
  {
   sum= sum+ ex/m;
   ex=ex/m;
  }
  cout<<sum;
    return 0;
}