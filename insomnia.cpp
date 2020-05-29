#include <iostream>

using namespace std;

int main()
{
    int k,l,m,n,d;
    cin >> k>>l>>m>>n>>d;
    int mat[100000];
    
    for(int i=1;i<=n;i++)
    {
        mat[i]=0;
    }
    
    for(int i=k;i<=d;i+=k)
    {
        mat[i]=1;
    }
    for(int i=l;i<=d;i+=l)
    {
        mat[i]=1;
    }
    for(int i=m;i<=d;i+=m)
    {
        mat[i]=1;
    }
    for(int i=n;i<=d;i+=n)
    {
        mat[i]=1;
    }
    int cnt=0;
    for(int i=1;i<=d;i++)
    if(mat[i]==1)
    cnt++;
    
    cout<<cnt;
    return 0;
}