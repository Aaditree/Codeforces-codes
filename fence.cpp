#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int total=0;
    for(int i=0;i<n;i++)
    {
        int ht;
        cin>>ht;
        if(ht<=h)
        total+=1;
        else
        {
            total = total + 2; 
        }
    }
    
    cout<<total;
    return 0;
}