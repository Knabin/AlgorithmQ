#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int a, b = 1, cnt = 0, tmp, i;
	cin >> a;

	tmp = a;
	a--;

	while (a > 0)
	{
		b++;
		a -= b;
		if (a % b == 0)
		{
			for (i = 1; i < b; ++i)
				cout << a / b + i << " + ";
			cout << a / b + i << " = " << tmp << endl;
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
