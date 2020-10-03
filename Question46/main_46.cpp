#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, i, k, temp = 0, idx = -1, sum = 0;
	cin >> n;
	vector<int> vInt(n);

	for (i = 0; i < n; ++i)
	{
		cin >> vInt[i];
		sum += vInt[i];
	}

	cin >> k;
	temp = 0;

	if (sum <= k) cout << -1 << endl;
	else
	{
		while (true)
		{
			if (++idx >= n) idx = 0;
			if(vInt[idx] == 0) continue;
			
			--vInt[idx];
			++temp;

			if (temp == k + 1) break;
		}

		cout << idx + 1 << endl;
	}

	return 0;
}
