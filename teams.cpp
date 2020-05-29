
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m[31],m1[31];
    for(int i=0;i<n;i++)
    {
        cin>>m[i]>>m1[i];
    }
    
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(m[i]==m1[j])
            c++;
        }
    }
    cout<<c;
    return 0;
}
