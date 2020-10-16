#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int n, ch[11], arr[11];
vector<int> v;
bool isEnd = false;

void DFS(int L)
{
	if (isEnd) return;

	int i, sum = 0;

	if (L == n + 1)
	{
		for (i = 1; i <= n; ++i)
		{
			if (ch[i] == 1) sum += arr[i];
		}
		for (i = 0; i < v.size(); ++i)
		{
			if (v[i] == sum)
			{
				cout << "YES" << endl;
				isEnd = true;
				return;
			}
		}
		v.push_back(sum);
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
	if(!isEnd) cout << "NO" << endl;
}