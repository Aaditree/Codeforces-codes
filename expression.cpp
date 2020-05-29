#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mat[4];
     mat[0] = a+b+c;
     mat[1]= (a+b)*c;
     mat[2]= a*(b+c);
     mat[3] = a*b*c;
     int max=0;
     for(int i=0;i<4;i++)
     {
         if(max<mat[i])
         max=mat[i];
     }
     
     cout<<max;
    return 0;
}