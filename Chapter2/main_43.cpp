#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count(const vector<int>& vInt, const int size)
{
	int i, cnt = 1, sum = 0;
	for (i = 0; i < vInt.size(); ++i)
	{
		if (sum + vInt[i] > size)
		{
			cnt++;
			sum = vInt[i];
		}
		else
		{
			sum += vInt[i];
		}
	}
	return cnt;
}

int main(void)
{
	int n, m, i, left = 1, right = 0, mid, res, max = -2147000000;
	cin >> n >> m;

	vector<int> vInt(n);

	for (i = 0; i < n; ++i)
	{
		cin >> vInt[i];
		right += vInt[i];

		if (vInt[i] > max) max = vInt[i];
	}

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (mid >= max && count(vInt, mid) <= m)
		{
			res = mid;
			right = mid - 1;

		}
		else
		{
			left = mid + 1;
		}
	}

	cout << res << endl;

	return 0;
}
