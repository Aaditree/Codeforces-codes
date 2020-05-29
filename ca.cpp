#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    
    long double even_n = (n/2);
	
	long double odd_n  = n - even_n;
	
	
	even_n = (even_n/2)*(2*2 + (n-1)*(2));
	
	odd_n = (odd_n/2)*(2*(-1) + (n-1)*(-2));
	
	cout<<((long)(even_n+odd_n));
    return 0;
}