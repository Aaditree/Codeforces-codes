#include <iostream>
#include <string>

using namespace std;

int main()
{
long n;
int count=0;
cin>>n;
long m[10000];
for(long i=0;i<n;i++)
    {
        cin>>m[i];
        
    }
    int b[100000];
    int k=0;
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


int max=0;
for(int i=0;i<=k;i++)
{
    if(max<b[i])
    max=b[i];
}

cout<<max+1;
return 0;
}