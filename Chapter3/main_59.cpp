#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int n, ch[11];

void DFS(int L)
{
	int i;
	if (L == n + 1)
	{
		for (i = 1; i <= n; ++i)
		{
			if (ch[i] == 1) cout << i << " ";
		}
		cout << endl;
	}
	else
	{
		ch[L] = 1;
		DFS(L + 1);
		ch[L] = 0;
		DFS(L + 1);
	}
}

int main(void)
{
	cin >> n;

	DFS(1);
}