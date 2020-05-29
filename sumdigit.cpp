
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int m,s;
    cin>>m>>s;
    int flag=0;
    for(int i=1;i<=s;i++)
    {
        int x=i;
        int y=s-i;
        int r = y*10+x;
        int r1 = x*10+y;
        int t= r;
        int count=0;
        while(t!=0)
        {
            int rem=t%10;
            count++;
            t=t/10;
        }
        if(count==m)
        {
            t = r1;
        count=0;
         while(t!=0)
        {
            int rem=t%10;
            count++;
            t=t/10;
        }
        if(count==m)
        flag=1;
        }
    if(flag==1){
    cout<<r1<<" "<<r;
    break;
    }
    
    }
    
    if(flag==0)
    cout<<"-1 -1";
return 0;
}
