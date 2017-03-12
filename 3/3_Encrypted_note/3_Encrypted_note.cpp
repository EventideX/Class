#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
	int i, j, k, n, m, s, t;
	char a[100001];
	fgets(a,100001,stdin);
	i = 0;
	n = strlen(a);
	while (i < n)
	{
		if (a[i] == 'W')
		{
			if ((a[i + 1] == 'U') && (a[i + 2] == 'B'))
			{
				i += 3;
				continue;
			}
		}
		j = i + 1;
		t = 0;
		while (j < n - 2)
		{
			if (a[j] == 'W')
			{
				if ((a[j + 1] == 'U') && (a[j + 2] == 'B'))
				{
					t = 1;
					break;
				}	
			}
			j++;
		}
		for (k = i; k < j; k++) cout << a[k];
		if (t == 1) cout << ' ';
		i = j;
	}
	return 0;
}