/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxx=2e5+100;
int a[maxx];
int vis[maxx];
int n;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++) vis[i]=0;
		for(int i=1;i<=n;i++) scanf("%d",&a[i]),vis[a[i]]++;
		int _max=0;
		int _min=0;
		for(int i=1;i<=n;i++)
		{
			_max=max(_max,vis[i]);
			if(vis[i]!=0) _min++;
		}
		_min-=1;
		int ans=min(_min,_max);
		if(_max-ans>=2) ans++;
		cout<<ans<<endl;
	}
	return 0;
}