#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count(const vector<int>& vInt, const int size)
{
	int i, prev = vInt[0], cnt = 1;
	for (i = 1; i < vInt.size(); ++i)
	{
		if (vInt[i] - prev >= size)
		{
			++cnt;
			prev = vInt[i];
		}
	}

	return cnt;
}

int main(void)
{
	int n, c, i, mid, res, temp;
	int left = 1, right = 0;

	cin >> n >> c;

	vector<int> vInt(n);

	for (i = 0; i < n; ++i)
	{
		cin >> vInt[i];
		right += vInt[i];
	}

	sort(vInt.begin(), vInt.end());

	right = vInt[n - 1];

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (count(vInt, mid) >= c)
		{
			res = mid;
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	cout << res << endl;

	return 0;
}
