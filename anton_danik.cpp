#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[100000];
    int A=0,D=0;
    cin>>s;
    for (int i=0;i<n;i++)
    {
        
        if(s[i]=='A')
        A++;
        else if(s[i]=='D')
        D++;
    }
    
    if(A>D)
    cout<<"Anton";
    else if(D>A)
    cout<<"Danik";
    else
    cout<<"Friendship";
    return 0;
}