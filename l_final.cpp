#include <iostream>
#include <string>

using namespace std;

int main()
{
long long n;
cin>>n;
int count=0;
if(n<1||n>1000000000000000000)
cout<<"NO";
else
{
    while(n!=0)
{
    if(n%10==4||n%10==7)
    count++;
    n=n/10;
}

if(count==7||count==4)
cout<<"YES";
else
cout<<"NO";
}

return 0;
}