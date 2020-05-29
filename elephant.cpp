

#include <iostream>

using namespace std;

int main()
{
    int r,cnt=0;
    
     cin>>r;
     while(r!=0)
     {
        for(int i=5;i>=1;i--)
            {
                if(r-i>=0)
                {
                    r=r-i;
                    cnt++;
                    break;
                }
                else
                continue;
        
            } 
     }
    
    
    cout<<cnt;
}