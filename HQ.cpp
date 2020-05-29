#include <iostream>
#include <string.h>

using namespace std;

int main()
{
string r;
cin>>r;
int c=0;
int l = r.size();

for(int i=0;i<l;i++)
{
    if(r[i]=='H'||r[i]=='Q'||r[i]=='9'||r[i]=='+')
    {
        c=1;
        cout<<"YES";
    }
}

if(c==0)
cout<<"NO";
return 0;
}