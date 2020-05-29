

#include <iostream>

using namespace std;

int main()
{
    int r,cnt=0;
    
    cin>>r;
    int mat[100000];
    for(int i=0;i<r;i++)
    {
        cin>>mat[i];
    }
    
    if (r==1)
    cout<<1;
    else
    {
            int l=r;
    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(mat[i]!=-1&&mat[j]!=-1)
            {
                if(mat[i]+mat[j]==4)
            {
                r=r-1;
                mat[j]=-1;
                break;
            }
            else if(mat[i]+mat[j]<4)
            {
                r=r-1;
                mat[i]=mat[i]+mat[j];
                mat[j]=-1;
            }
            }
            
        }
    }
    cout<<r;
    }

}