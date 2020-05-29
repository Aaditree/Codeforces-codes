
#include <iostream>

using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    int x[100001],y[100001];
    
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(x[i]<x[j])
        {
            int temp=x[i];
            x[i]=x[j];
            x[j]=temp;
            
            int t = y[i];
            y[i]=y[j];
            y[j]=t;
        }
    }
    
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]<s)
        {s=s+y[i];
            flag=0;
        }
        else
        {
            flag=1;
        }
    }
    
    if(flag==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
