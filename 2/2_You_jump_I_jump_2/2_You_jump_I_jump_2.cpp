#include<iostream>
using namespace std;

int a[100001], b[200001] = { 0 };
int main()
{
	int i, j, k, n, m, s, t;
	cin >> n;
	for (i = 1; i <= n; i++) cin >> a[i];
	i = 1;
	t = 0;
	b[1] = 1;
	while (i < n)
	{
		if (b[i] == 1)
		{
			for (j = 1; j <= a[i]; j++)
			{
				b[i + j] = 1;
				if (i + j == n)
					t = 1;
			}
		}
		if (t == 1) break;
		i++;
	}
	if (t == 1) cout << "Yes";
	else cout << "No";
	return 0;
}