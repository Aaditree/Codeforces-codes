#include <iostream>
#include <string>

using namespace std;

int main()
{
int n;
cin>>n;
int count=0;

for(int i=0;i<n;i++)
{
    int p,q;
    cin>>p>>q;
    int diff = q - p;
    if(diff>=2)
        count++;
}
cout<<count;
return 0;
}