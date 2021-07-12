#include <iostream>
using namespace std;

int main()
{
	int n, i, j, cnt = 0;
	cin >> n;

	for (i = 2; i < n; ++i)
	{
		bool b = true;
		for (j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0)
			{
				b = false;
				break;
			}
		}
		if (b) ++cnt;
	}

	cout << cnt << endl;


	return 0;
}
