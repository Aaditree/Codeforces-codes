#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[100000];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        continue;
        else
        count++;
    }
    
    cout<<count;
    return 0;
}