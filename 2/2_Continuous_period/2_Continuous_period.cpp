#include<iostream>
using namespace std;

int main()
{
	int i, j, k, n, m, s, t, a[10001] = { 0 },b[10001][2];
	cin >> n;
	m = 0;
	for (i = 0; i < n; i++)
	{
		cin >> j;
		a[j] = 1;
		if (j > m) m = j;
	}
	i = 0;
	j = 0;
	k = 0;
	while (j < m)
	{
		while (a[i] == 0)
			i++;
		j = i;
		while (a[j] == 1)
			j++;
		j--;
		b[k][0] = i;
		b[k][1] = j;
		k++;
		i = j + 1;
	}
	cout << k << endl;
	for (i=0;i<k;i++) cout << "[" << b[i][0] << "," << b[i][1] << "]" << endl;
	return 0;
}