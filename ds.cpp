
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int mat[3];
    for(int i=0;i<3;i++)
    cin>>mat[i];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        if(mat[i]>mat[j])
        {
            int t=mat[i];
            mat[i]=mat[j];
            mat[j]=t;
        }
    }
    
    int sum = mat[1]-mat[0]+mat[2]-mat[1];
    cout<<abs(sum);
    return 0;
}
