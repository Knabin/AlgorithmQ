#include <iostream>
using namespace std;

int main()
{
	int n, m, input, i, cnt = 0, res = -1;
	
	cin >> n >> m;

	for (i = 0; i < n; ++i)
	{
		cin >> input;
		if (input > m) ++cnt;
		else cnt = 0;

		if (res < cnt) res = cnt;
	}

	cout << res << endl;

	return 0;
}