#include <iostream>
using namespace std;

int main()
{
	int n, i, count = 0, tmp;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		tmp = i;
		while (tmp > 0)
		{
			tmp /= 10;
			count++;
		}
	}

	cout << count;

	return 0;
}
