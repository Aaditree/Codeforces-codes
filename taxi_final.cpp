#include<bits/stdc++.h>
using namespace std;
#define lli long long int
//char a[2000][2000];
int main()
{
	int n;
	cin>>n;
	int a,b[5]={0},ans=0,sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		b[a]++;
	}
	ans+=b[4];
	ans+=b[3];
	if(b[1]>b[3])
		b[1]=b[1]-b[3];
	else
		b[1]=0;
	sum=(b[1]+2*b[2]);
	if(sum%4!=0)
		ans+=1+(sum)/4;
	else
		ans+=(sum)/4;

	printf("%d",ans);
}