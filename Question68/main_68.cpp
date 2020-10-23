#include <iostream>
#include <vector>

using namespace std;

int n, res = 2147000000;
int map[21][21];
int ch[21];

void DFS(int L, int sum)
{
	if (L == n)
	{
		if (res > sum) res = sum;
	}
	else
	{
		for (int i = 1; i <= n; ++i)
		{
			if (map[L][i] > 0 && ch[i] == 0)
			{
				ch[i] = 1;
				DFS(i, sum + map[L][i]);
				ch[i] = 0;
			}
		}
	}
}

int main(void)
{
	int m, i, a, b;
	cin >> n >> m;

	for (i = 0; i < m; ++i)
	{
		cin >> a >> b;
		cin >> map[a][b];
	}

	ch[1] = 1;
	DFS(1, 0);

	cout << res << endl;

	return 0;
}