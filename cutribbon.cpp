
#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int cnt=0;
    if(a==n)
    cnt++;
    if(b==n)
    cnt++;
    if(c==n)
    cnt++;
    if(a+b==n)
    cnt++;
    if(a+c==n)
    cnt++;
    if(b+c==n)
    cnt++;
    if(a+b+c==n)
    cnt++;
    
    cout<<cnt;
    return 0;
}
