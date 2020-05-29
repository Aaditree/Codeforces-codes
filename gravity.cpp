#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mat[100];
    
    for(int i=0;i<n;i++)
    {
        cin>>mat[i];
    }
    
    for(int a=0;a<n;a++)
    for(int i=0;i<n-1;i++)
    {
        if(mat[i]>mat[i+1])
        {
            int temp = mat[i];
            mat[i]=mat[i+1];
            mat[i+1]=temp;
        }
    }
    
    for(int i=0;i<n;i++)
    cout<<mat[i]<<" ";
    return 0;
}