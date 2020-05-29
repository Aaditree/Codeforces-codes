

#include <iostream>

using namespace std;

int main()
{
    int n,one,sec,third;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >>one>>sec>>third ;
        sum = sum + one + sec + third;
    }
    
    if( sum == 0)
    cout<<"YES";
    else
    cout<<"NO";
}