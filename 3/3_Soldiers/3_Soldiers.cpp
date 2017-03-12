#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int i, j, k, n, m, s, t, a[100001], b, e;
	char c[200];
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> a[i];
	fgets(c, 200, stdin);
	for (i = 0; i < m; i++)
	{
		fgets(c, 200, stdin);
		for (j = 0; j < strlen(c); j++)
			if ((c[j] >= '0') && (c[j] <= '9')) break;
		b = 0;
		while ((c[j] >= '0') && (c[j] <= '9'))
		{
			b = 10 * b + c[j] - '0';
			j++;
		}
		j++;
		e = 0;
		while ((c[j] >= '0') && (c[j] <= '9'))
		{
			e = 10 * e + c[j] - '0';
			j++;
		}
		switch (c[0])
		{
		case 's':
		{
			sort(a + (b - 1), a + e);
			break;
		}
		case 'r':
		{
			b--;
			e--;
			while (b < e)
			{
				t = a[b];
				a[b] = a[e];
				a[e] = t;
				b++;
				e--;
			}
			break;
		}
		case 'q':
		{
			s = 0;
			for (j = b - 1; j < e; j++)
				s += a[j];
			cout << s << endl;
			break;
		}
		case 'c':
		{
			for (j = 0; j < n; j++)
				if (a[j] == b) a[j] = e;
			break;
		}
		case 'o':
		{
			for (j = 0; j < n - 1; j++) cout << a[j] << ' ';
			cout << a[n - 1] << endl;
			break;
		}
		}
	}
	return 0;
}