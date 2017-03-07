#include<iostream>
using namespace std;

int main()
{
	int i, j, k, n, m, s, t, a[1001],x,y;
	cin >> n;
	for (i = 1; i <= n; i++) cin >> a[i];
	x = 0;
	y = 0;
	t = 0;
	i = 1;
	j = n;
	while ((x==0)||(y==0))
	{
		if (x==0) i += a[i];
		if (y==0) j -= a[j];
		if (i == n) x = 1;
		else 
			if (i > n)
			{
				t = 1;
				break;
			}
		if (j == 1) y = 1;
		else
			if (j < 1)
			{
				t = 1;
				break;
			}
	}
	if (t == 0) cout << "Yes";
	else cout << "No";
	return 0;
}