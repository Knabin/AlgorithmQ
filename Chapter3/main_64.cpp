#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, cnt = 0;
int map[21][21];
int ch[21];

void DFS(int v)
{
	if (v == n)
	{
		cnt++;
	}
	else
	{
		for (int i = 1; i <= n; ++i)
		{
			if (map[v][i] == 1 && ch[i] == 0)
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
	int m;
	cin >> n >> m;

	int p1, p2;

	for (int i = 1; i <= m; ++i)
	{
		cin >> p1 >> p2;
		map[p1][p2] = 1;
	}

	ch[1] = 1;
	DFS(1);

	cout << cnt << endl;

	return 0;
}