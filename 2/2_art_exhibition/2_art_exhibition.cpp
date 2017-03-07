#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i, j, k, n, m, s, t, a[1001] = { 0 }, b[1001];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> j;
		a[j]++;
	}
	s = 0;
	t = 1;
	while (t == 1)
	{
		t = 0;
		for (i = 0; i < 1001; i++)
		{
			if (a[i] >= 1)
			{
				a[i]--;
				s++;
				t = 1;
			}
		}
		if (t == 1) s--;
	}
	cout << s;
	return 0;
}