#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mat[100];
    for(int i=0;i<n;i++)
    {
        cin>>mat[i];
    }
    int m[100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+1==mat[j])
            m[i]=j;
        }
    }
   
   for(int i=0;i<n;i++)
   cout<<m[i]+1<<" ";
    return 0;
}