
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    long m;
    cin>>m;
    
    if(m>0)
    cout<<m;
    else
    {
        int t=abs(m);
        int r=t%10;
        t=t/10;
        int r1=t%10;
        t=t/10;
        if(r>r1)
        t=t*10+r1;
        else
        t=t*10+r;
        t=t*(-1);
        cout<<t;
    }
    return 0;
}
