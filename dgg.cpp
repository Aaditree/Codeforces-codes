
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double n;
    cin>>n;
    string m;
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m=="Tetrahedron")
        c=c+4;
        else if(m=="Cube")
        c=c+6;
        else if(m=="Octahedron")
        c=c+8;
        else if(m=="Dodecahedron")
        c=c+12;
        else
        c=c+20;
    }
    cout<<c;
    return 0;
}
