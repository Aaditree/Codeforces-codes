
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
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<mat[i])
        max=mat[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + max - mat[i];
    }
    cout<<sum;
    return 0;
}
