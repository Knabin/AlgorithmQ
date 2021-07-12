#include <iostream>
#include <vector>

using namespace std;

int arr[21][21];
int ch[21];
int n, min = 2147000000;

void DFS(int v, int sum)
{
	int i;
	if (v == n)
	{
		if (sum < min) min = sum;
	}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			if (arr[v][i] > 0 && ch[i] == 0)
			{
				ch[i] = 1;
				DFS(i, sum + arr[v][i]);
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
		cin >> arr[a][b];
	}

	ch[1] = 1;
	DFS(1, 0);

	cout << min << endl;

	return 0;
}