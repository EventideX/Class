#include<iostream>
using namespace std;

int main()
{
	int i, j, k, n, m, s, t, a[100001] = { 0 };
	char c;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> c;
		if (c == 'R') a[i] = 1;
		if (c == 'L') a[i] = 2;
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			t = 0;
			j = i;
			while (j < n)
			{
				if (j < n - 1)
					if (a[j + 1] != 0)
						if (a[j + 1] == 2)
						{
							t = 1;
							break;
						}
						else break;
						j++;
						a[j] = 1;
			}
			if (t == 1)
				if ((i + j) % 2 != 0)
				{
					a[(i + j + 1) / 2] = 0;
					for (k = (i + j + 1) / 2 + 1; k <= j; k++) a[k] = 2;
				}
		}
		else
			if ((a[i] == 2) && (a[i - 1] == 0))
			{
				t = 0;
				j = i;
				while (j >= 0)
				{
					if (j > 0)
						if (a[j - 1] != 0)
							if (a[j - 1] == 1)
							{
								t = 1;
								break;
							}
							else break;
							j--;
							a[j] = 2;
				}
				if (t == 1)
					if ((i + j) % 2 != 0)
					{
						a[(i + j - 1) / 2] = 0;
						for (k = (i + j - 1) / 2 - 1; k >= i; k--) a[k] = 1;
					}
		}
	}
	s = 0;
	for (i = 0; i < n; i++)
	if (a[i] == 0) s++;
	cout << s;
	return 0;
}