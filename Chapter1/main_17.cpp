#include <iostream>
using namespace std;

int main()
{
	int n, num, res, i, j, temp;
	cin >> n;

	for (i = 1; i <= n; ++i)
	{
		cin >> num >> res;
		temp = 0;
		for (j = 1; j <= num; ++j)
		{
			temp += j;
		}
		if (temp == res)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}