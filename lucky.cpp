#include <iostream>
#include <string>

using namespace std;

int main()
{
int n;
cin>>n;
int count_l=0,count_n=0;
if(n<1||n>1000000000000000000)
cout<<"NO";
else
{
    while(n!=0)
{
    if(n%10==4||n%10==7)
    count_l++;
    else
    count_n++:
    n=n/10;
}

if((count_l==7||count_l==4)&&count_n==0)
cout<<"YES";
else
cout<<"NO";
}

return 0;
}