
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    long mat[10001];
    for(int i=0;i<t;i++)
    {
        long a,b;
        cin>>a>>b;
        
        int cnt = a%b;
        
        cnt = b- cnt;
        if(cnt!=b)
        mat[i]=cnt;
        else
        mat[i]=0;
        
    }
    
    for(int i=0;i<t;i++)
    {
        cout<<mat[i]<<endl;
    }
    return 0;
}
