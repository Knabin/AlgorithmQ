#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, i, temp, prev, count = 1, max = -2147000000;
	cin >> n;

	vector<int> vInt;

	for (i = 0; i < n; ++i)
	{
		cin >> temp;
		vInt.push_back(temp);
	}

	prev = vInt[0];

	for (i = 1; i < n; ++i)
	{
		if (vInt[i] >= prev)
		{
			count++;
			if (count > max) max = count;
		}
		else count = 1;
		prev = vInt[i];
	}

	cout << max << endl;

	return 0;
}