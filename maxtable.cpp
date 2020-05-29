#include <iostream>
#include <string>
int main()
{
    int n;
    std::cin>>n;
    int mat[10][10];
    for(int i=0;i<n;i++)
    {
        mat[0][i]=1;
        mat[i][0]=1;
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            int sum=mat[i-1][j]+mat[i][j-1];
            mat[i][j]=sum;
        }
    }
    
    std::cout<<mat[n-1][n-1];
    return 0;
}
