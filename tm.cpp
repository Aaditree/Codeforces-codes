
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
     int n,k,i,cnt=0;
    cin>>n>>k;
    int a[2001];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(5-a[i]>=k){
            cnt++;
        }
    }
    cout<<cnt/3;
return 0;
}
