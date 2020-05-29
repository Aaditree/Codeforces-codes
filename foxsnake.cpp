
#include <iostream>

using namespace std;

int main()
{
    
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i+=2)
    {
        for(int j=0;j<m;j++)
        cout<<"#";
        
        cout<<"\n";
        
        if(i+1<n)
        {
            if(i%4!=0)
        {
            cout<<"#";
            for(int j=1;j<m;j++)
        cout<<".";
        cout<<"\n";
        }
        else
        {
        for(int j=0;j<m-1;j++)
        cout<<".";
        cout<<"#";    
        cout<<"\n";
        
        }    
        }
        
        
        
        
    }
    return 0;
}
