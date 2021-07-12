#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, cnt = 0;
int map[21][21];
int ch[21];

void DFS(int L)
{
	int i;
	if (L == n)
	{
		++cnt;
	}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			if (map[L][i] == 1 && ch[i] == 0)
			{
				ch[i] = 1;
				DFS(i);
				ch[i] = 0;
			}
		}
	}
}

int main(void)
{
	int m, i, a, b;
	cin >> n >> m;

	for (i = 1; i <= m; ++i)
	{
		cin >> a >> b;
		map[a][b] = 1;
	}

	ch[1] = 1;
	DFS(1);

	cout << cnt << endl;

	return 0;
}