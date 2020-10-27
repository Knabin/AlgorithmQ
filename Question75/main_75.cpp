#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Data
{
	int money;
	int when;

	Data(int a, int b)
		: money(a), when(b)
	{}

	bool operator < (Data& b)
	{
		return when > b.when;
	}
};

int main(void)
{
	int n, m, d, i, j, res = 0, max = -2147000000;
	vector<Data> T;
	priority_queue<int> pQ;

	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cin >> m >> d;
		T.emplace_back(Data(m, d));

		if (d > max) max = d;
	}

	sort(T.begin(), T.end());
	j = 0;

	// i의 범위 == 강연 날짜
	for (i = max; i >= 1; --i)
	{
		for (; j < n; ++j)
		{
			if (T[j].when < i) break;
			pQ.push(T[j].money);
		}
		if (!pQ.empty())
		{
			res += pQ.top();
			pQ.pop();
		}
	}

	cout << res << endl;

	return 0;
}