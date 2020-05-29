#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int hard=0;
    for(int i=0;i<n;i++)
    {
        int ip;
        cin>>ip;
        if(ip==1)
        hard++;
    }
    
    if(hard==0)
    cout<<"EASY";
    else
    cout<<"HARD";
    
    return 0;
}