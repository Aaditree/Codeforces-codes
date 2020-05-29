#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
   double n,t;
    double a ,b;
    cin>>t;
    double fin[10000];
    
    for(int q=1;q<=t;q++)
    {
        int count=0;
        cin>>n;
        for(double i=1;i<=n;i++)
        {
            a= (n-i);
            b=i;
            if(a>b)
            count++;
            else
            break;
        }
        fin[q]=count;
    }
    
    for(int q=1;q<=t;q++)
    cout<<((int)fin[q]);
    return 0;
}