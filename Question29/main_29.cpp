#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, tmp, d, result = 0;
	cin >> n;

	for(int i = 1; i <= n; ++i)
	{
		tmp = i;
		while(tmp > 0)
		{
			d = tmp % 10;
			if (d == 3) ++result;
			tmp /= 10;
		}
	}

	cout << result << endl;

	return 0;
}