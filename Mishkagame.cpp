
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int MM=0,CC=0;
    for(int i=0;i<n;i++)
    {
        
        int m,c;
        cin>>m>>c;
        if(m>c)
        MM++;
        if(m<c)
        CC++;
    }
    
    if(MM>CC)
    cout<<"Mishka";
    else if(MM<CC)
    cout<<"Chris";
    else
    cout<<"Friendship is magic!^^";
return 0;
}
