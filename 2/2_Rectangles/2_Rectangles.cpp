#include<iostream>
using namespace std;

int main()
{
	int i, j, k, n, m, s, t, a[101][101] = { 0 }, x, y, z;
	cin >> n;
	s = 0;
	for (i = 0; i < n; i++)
	{
		cin >> x >> y >> z;
		for (j = x; j < y; j++)
			for (k = 0; k < z; k++)
			{
				a[j][k]++;
				if (a[j][k] == 1) s++;
			}
	}
	cout << s;
	return 0;
}