#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int sum=0;
    int mat[100];
    
    for(int i=0;i<n;i++)
    {
        cin>>mat[i];
        sum=sum+mat[i];
    }
    
    double r = ((double)sum) /((double) n);
    cout<<r;
    return 0;
}