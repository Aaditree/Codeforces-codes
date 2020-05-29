#include <iostream>
#include <string>

using namespace std;

int main()
{
long n;
long count=0;
cin>>n;
long long m[10000];
for(long i=0;i<n;i++)
    {
        cin>>m[i];
        
    }
    long long b[10000];
    long k=0;
for(long i=0;i<n-1;i++)
{
    if(m[i+1]>=m[i])
        {
            count++;
            b[k]=count;
        }
    else
    {
        b[k]=count;
        count=0;
        k++;
    }
        
}


long max=0;
for(long i=0;i<=k;i++)
{
    if(max<b[i])
    max=b[i];
}

cout<<max+1;
return 0;
}