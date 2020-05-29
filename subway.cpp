
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int n, m ,a, b;
    
    cin>>n>>m>>a>>b;
    
    int sum = (n/m)* b + (n%m)*a;
    cout<<sum;
    return 0;
}
