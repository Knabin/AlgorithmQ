#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m, i, left, right, center, result = -1;
	cin >> n >> m;

	vector<int> vInt(n);

	for (i = 0; i < n; ++i)
		cin >> vInt[i];

	sort(vInt.begin(), vInt.end());

	left = 0;
	right = n - 1;

	while (left <= right)
	{
		center = (left + right) / 2;

		if (vInt[center] < m)
		{
			left = center + 1;
		}
		else if (vInt[center] == m)
		{
			result = center;
			break;
		}
		else
		{
			right = center - 1;
		}
	}

	cout << result + 1 << endl;

	return 0;
}
