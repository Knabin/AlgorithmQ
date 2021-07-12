#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dy[21][21];

int DFS(int n, int r)
{
	if (dy[n][r] > 0) return dy[n][r];
	if (r == 0 || n == r) return 1;
	else return dy[n][r] = DFS(n - 1, r) + DFS(n - 1, r - 1);
}

int main(void)
{
	int n, r;
	cin >> n >> r;

	cout << DFS(n, r) << endl;

	return 0;
}