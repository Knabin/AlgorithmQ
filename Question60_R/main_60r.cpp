#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int n, ch[11], arr[11];
bool isEnd;

// 방문하려는 부분집합과 방문하지 않는 부분집합의 합이 같은 경우에만 YES

void DFS(int L)
{
	if (isEnd) return;

	int sum1 = 0, sum2 = 0;

	if (L == n + 1)
	{
		for (int i = 1; i <= n; ++i)
		{
			if (ch[i] == 0) sum1 += arr[i];
			else sum2 += arr[i];
		}
		if (sum1 == sum2) isEnd = true;

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
	int i;
	cin >> n;

	for (i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	DFS(1);

	cout << (isEnd ? "YES" : "NO") << endl;
}