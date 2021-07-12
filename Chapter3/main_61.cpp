#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

// N개의 원소 집합, +와 - 연산 이용해서
// 들어온 M이라는 숫자를 만드는 경우 count++
vector<int> nums;
int m;
int cnt = 0;

void DFS(int L, int value)
{
	if (L == nums.size())
	{
		if (m == value)
		{
			++cnt;
		}
	}
	else
	{
		DFS(L + 1, value + nums[L]);
		DFS(L + 1, value - nums[L]);
		DFS(L + 1, value);
	}
}

int main(void)
{
	int n, i;
	cin >> n >> m;

	nums.resize(n);

	for (i = 0; i < n; ++i)
	{
		cin >> nums[i];
	}

	DFS(0, 0);

	if (cnt == 0) cnt = -1;
	cout << cnt << endl;
}