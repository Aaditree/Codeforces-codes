
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mat[101];
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>mat[i];
        if(mat[i]%2==0)
        {
            even++;
            mat[i]=1;
        }
        else
        {
            odd++;
            mat[i]=0;
        }
    }
    
    int r;
    if(odd>even)
    for(int i=0;i<n;i++)
    {
        if(mat[i]==1)
        {
            r=i+1;
            break;
        }
    }
    else
    for(int i=0;i<n;i++)
    {
        if(mat[i]==0)
        {
            r=i+1;
            break;
        }
    }
    
    cout<<r;

    return 0;
}
