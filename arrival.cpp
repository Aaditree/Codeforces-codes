
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mat[101];
    for(int i=0;i<n;i++)
    {
        cin>>mat[i];
    }
    
    int max=mat[n-1],min=mat[0],pos_min=0,pos_max=0;
    
    for(int i=0;i<n;i++)
    {
        if(min>=mat[i])
            {pos_min=i;min=mat[i];}
    }
    

    int count=0;
    for(int i=pos_min;i<n-1;i++)
    {
        int temp=mat[i];
        mat[i]=mat[i+1];
        mat[i+1]=temp;
        
        count++;
    }
    
    
    for(int i=n-1;i>=0;i--)
    {
        if(max<=mat[i])
        {pos_max=i;max=mat[i];}
    }
    
    for(int i=pos_max;i>0;i--)
    {
        int temp=mat[i];
        mat[i]=mat[i-1];
        mat[i-1]=temp;
        count++;
    }
    
    cout<<count;
    return 0;
}
