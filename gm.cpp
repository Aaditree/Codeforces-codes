#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int p,q;
    cin>>p;
    int matp[101],matq[101];
    
    for(int i=0;i<p;i++)
    cin>>matp[i];
    
    cin>>q;
    for(int i=0;i<q;i++)
    cin>>matq[i];
    
    int m[101];
    for(int i=1;i<=n;i++)
    m[i]=0;
    
    for(int i=1;i<=n;i++)
    { 
        for(int j=0;j<p;j++)
        {
            if(matp[j]==i)
            {m[i]=1;}
        }
      
    }
    
    
    for(int i=1;i<=n;i++)
    { 
        for(int j=0;j<q;j++)
        {
            if(matq[j]==i)
            {m[i]=1;}
        }
        
    }
    
    int f=0;
    for(int i=1;i<=n;i++)
    {
        if(m[i]==1)
        continue;
        else
        {
            f=1;
            break;
        }
    }
    
    if(f==0)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
    return 0;
}