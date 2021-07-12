#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, i;
	cin >> n;
	vector<int> vInt(n + 1);

	int p2 = 1, p3 = 1, p5 = 1, min = 2147000000;
	int v2, v3, v5;
	vInt[1] = 1;

	for (i = 2; i <= n; ++i)
	{
		v2 = vInt[p2] * 2;
		v3 = vInt[p3] * 3;
		v5 = vInt[p5] * 5;

		if (v2 < v3) min = v2;
		else min = v3;
		if (v5 < min) min = v5;

		if (v2 == min) p2++;
		if (v3 == min) p3++;
		if (v5 == min) p5++;
		vInt[i] = min;
	}

	cout << vInt[n] << endl;

	return 0;
}
