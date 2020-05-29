#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string a="I hate";
    string b="I love";
    string s="";
    for(int i=0;i<n;i++)
    {
        if(i<n-1)
        {
            if(i%2==0)
            s = s + a +" " + "that ";
            else
            s = s + b +" " + "that ";
        }
        else
        {
            if( i%2==0)
            s = s+a + " " +"it ";
            else
            s=s + b + " " +"it ";
        }
    }
    
    cout<<s;
    return 0;
}