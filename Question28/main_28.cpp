#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, i, j, tmp, t = 0, f = 0;
	cin >> n;

	for(i = 2; i <= n; ++i)
	{
		tmp = i;
		j = 2;

		while (true)
		{
			if(tmp % j == 0)
			{
				if (j == 2) ++t;
				else if (j == 5) ++f;
				tmp = tmp / j;
			}
			else ++j;
			if (tmp == 1) break;
		}
	}

	cout << min(t, f) << endl;

	return 0;
}