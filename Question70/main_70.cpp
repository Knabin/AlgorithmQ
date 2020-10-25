#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int ch[21], dis[21];

int main(void)
{
	int n, m, i, a, b, x;
	vector<int> map[21];
	queue<int> Q;

	cin >> n >> m;

	for (i = 1; i <= m; ++i)
	{
		cin >> a >> b;
		map[a].push_back(b);
		map[b].push_back(a);
	}

	Q.push(1);
	ch[1] = 1;

	while (!Q.empty())
	{
		x = Q.front();
		Q.pop();

		for (i = 0; i < map[x].size(); ++i)
		{
			if (ch[map[x][i]] == 0)
			{
				ch[map[x][i]] = 1;
				Q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1;
			}
		}
	}

	for (i = 2; i <= n; ++i)
	{
		cout << i << " : " << dis[i] << endl;
	}

	return 0;
}