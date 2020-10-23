#include <iostream>
#include <vector>

using namespace std;

int n, cost = 2147000000;
int ch[21];
vector<pair<int, int>> map[21];

void DFS(int v, int sum)
{
	if (v == n)
	{
		if (cost > sum) cost = sum;
	}
	else
	{
		for (int i = 0; i < map[v].size(); ++i)
		{
			if (ch[map[v][i].first] == 0)
			{
				ch[map[v][i].first] = 1;
				DFS(map[v][i].first, sum + map[v][i].second);
				ch[map[v][i].first] = 0;
			}
		}
	}
}

int main(void)
{
	int m, i, a, b, c;
	cin >> n >> m;

	for (i = 1; i <= m; ++i)
	{
		cin >> a >> b >> c;
		map[a].push_back(make_pair(b, c));
	}

	ch[1] = 1;
	DFS(1, 0);

	cout << cost << endl;

	return 0;
}