#include<iostream>
using namespace std;

int main()
{
	int i, j, k, n, m, s, t, a[10001] = { 0 }, x, y;
	cin >> n >> x >> y;
	t = 0;
	i = 1;
	j = 1;
	k = 0;
	while (t == 0)
	{
		i += x;
		j += y;
		if (i > n) i = i - n;
		if (j > n) j = j - n;
		a[i]++;
		a[j]++;
		k++;
		if ((a[i] > 1) || (a[j] > 1)) t = 1;
	}
	cout << k;
	return 0;
}