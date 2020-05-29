
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int a,b;
        a=i;
        b=n-i;
        int ca=0,cb=0;
        for(int j=2;j<=a;j++)
        {
            if(a%j==0)
            ca++;
        }
        for(int j=2;j<=b;j++)
        {
            if(b%j==0)
            cb++;
        }
        if(ca==1||cb==1)
        continue;
        else{
        cout<<a<<" "<<b;
            break;
        }
    }
    return 0;
}
