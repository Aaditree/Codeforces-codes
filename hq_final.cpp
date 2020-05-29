#include <iostream>
#include <string>

using namespace std;

int main()
{
string r;
cin>>r;
int c=0;
int l = r.size();

if(l>=1&&l<=100)
for(int i=0;i<l;i++)
{
    if(r[i]>=33&&r[i]<=126)
    if(r[i]=='H'||r[i]=='Q'||r[i]=='9')
    {
        c=1;
        break;
    }
}

if(c==1)
cout<<"YES";
else
cout<<"NO";
return 0;
}