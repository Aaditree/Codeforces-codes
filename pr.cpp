
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    long n;
    cin>>n;
    long mat[100001];
    
    for(long i=0;i<n;i++)
    {
        cin>>mat[i];
    }
    
    int z=0,dd=0;
    for(long i=0;i<n;i++)
    {
        if(mat[i]<0)
        {
            if(z>0)
            z--;
            else
            dd++;
        }
        if(mat[i]>0)
        z=z+mat[i];
    }
    
    cout<<dd;
    return 0;
}
