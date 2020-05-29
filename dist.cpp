
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum = (a+b+c)/3;
    int s = abs(sum-a)+abs(sum-b)+abs(sum-c);
    cout<<s;
    return 0;
}
