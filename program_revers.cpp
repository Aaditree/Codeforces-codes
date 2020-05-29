#include <iostream>
#include <string>

using namespace std;

int main()
{
string m,n;
cin>>m>>n;
int flag=0;
if(m.length()==n.length())
for(int i=0;i<m.length();i++)
{
    if(m[i]==n[n.length()-1-i])
    continue;
    else
    {
        flag=1;
        break;
    }
}
else{
    flag=1;
    
}


if(flag==0)
cout<<"YES";
else
cout<<"NO";
return 0;
}