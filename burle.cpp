
#include <iostream>

using namespace std;

int main()
{
    int n,r;
    cin>>n>>r;
    int fin=0;
    for(int i=1;i<=n;i++)
    {
        int z;
        z=i*n;
        if(z%10==0)
        {
            fin=i;
            break;
        }
        z= i*n - r;
        if(z%10==0)
        {
            fin=i;
            break;
        }
    }
    cout<<fin;

    return 0;
}
