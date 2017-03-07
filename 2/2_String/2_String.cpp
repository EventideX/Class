#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,n,m,s,t,a[100001],b[100001]={0};
	char c[100001];
	cin>>n>>m;
	gets(c);
	gets(c);
	for (i=0;i<m;i++) cin>>a[i];
	sort(a,a+m);
	i=0;
	while (i+1<m)
	{
		a[i]--;
		a[i+1]--;
		for (j=a[i];j<a[i+1];j++)
		{
			b[j]++;
			b[n-j-1]++;
		}
		i+=2;
	}
	if (i==m-1)
	{
		k=a[m-1]-1;
		for (j=k;j<=n-k-1;j++) b[j]++;
	}
	for (i=0;i<n;i++)
	if (b[i]%2==1) cout<<c[n-i-1];
	else cout<<c[i];
	return 0;
}
