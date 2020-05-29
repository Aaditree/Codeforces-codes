#include <iostream>
#include <string>

using namespace std;

int main()
{
    long n,k;
    cin>>n>>k;
    int flag=0;
    long odd=0,even=0;
    for(long i=1;i<=n;i+=2)
    {
        odd++;
        if(odd==k)
        {
            cout<<i;
            flag=1;
        }
    }
    
    if(flag==0)
    {
        even=odd;
        for(int i=2;i<=n;i+=2)
    {
        
        even++;
        if(even==k)
        {
            cout<<i;
            flag=1;
        }
    }    
    }
    
    return 0;
}