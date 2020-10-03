#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, i, j, sum, num, cnt, cnt2 = 0;
	bool flag;
	cin >> n;

	i = n / 2;
	if (n % 2 != 0) i += 1;
	for (; i >= 0; --i)
	{
		sum = 0;
		cnt = 0;
		num = i;
		flag = false;
		while (true)
		{
			sum += num;
			if (sum == n)
			{
				flag = true;
				++cnt2;
				break;
			}
			else if (sum > n)
				break;
			--num;
			++cnt;
		}

		if (flag)
		{
			for (j = cnt; j > 0; --j)
				cout << i - j << " + ";
			cout << i << " = " << n << endl;
		}
	}

	cout << cnt2 << endl;


	return 0;
}
