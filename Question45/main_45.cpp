#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, k, i, count = 0, idx = 0, size = 0, result = 0;
	cin >> n >> k;
	vector<bool> vBool(n);

	size = n;

	while (size > 1)
	{
		if (!vBool[idx])
		{
			if (++count >= k)
			{
				vBool[idx] = true;
				--size;
				count = 0;
			}
			else result = idx;
		}

		if (++idx >= n) idx = 0;
	}

	cout << result + 1 << endl;


	return 0;
}
