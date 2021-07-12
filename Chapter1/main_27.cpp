#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, i, flag, a;
	cin >> n;
	vector<int> vInt(n + 1);

	for (i = n; i >= 1; --i)
	{
		a = i;
		flag = 2;

		while(true)
		{
			if (a % flag == 0)
			{
				a = a / flag;
				vInt[flag]++;
			}
			else flag++;
			if (a == 1) break;
		}
	}
	cout << n << "! = ";
	for (i = 2; i <=n; ++i)
	{
		if (vInt[i] != 0) cout << vInt[i] << " ";
	}

	return 0;
}