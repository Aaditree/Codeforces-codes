
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double a[4];
    double re[4];
    for(int i=0;i<4;i++)
    cin>>a[i];
    
    re[0]=a[0];
    int fin=0;
    for(int i=0;i<4;i++)
    re[i]=0;
     int g=1;
    for(int i=0;i<4;i++)
    {
        int count=0;
       
        for(int j=0;j<4;j++)
        {
            if(re[j]==a[i])
            {count++;}
        }
        if(count==0)
        {
            re[g]=a[i];
            fin++;
            g++;
            
        }
        
    }
    
    
    cout<<4-fin; 
    return 0;
}
