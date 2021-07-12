#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int map[21][21];

int main(void)
{
	int n, m;
	cin >> n >> m;

	int p1, p2, p3;

	for (int i = 1; i <= m; ++i)
	{
		cin >> p1 >> p2 >> p3;
		map[p1][p2] = p3;
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
			cout << map[i][j];
		cout << endl;
	}


	return 0;
}