#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int f=0;
    for(int i=0;i<5;i++)
    {
        string m;
        cin>>m;
        if(n[0]==m[0])
       { f=1;break;}
        if(n[1]==m[1])
        { f=1;break;}
    }
    if(f==1)
cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
