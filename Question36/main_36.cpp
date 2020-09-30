#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, i, j, temp;
	cin >> n;
	vector<int> vInt(n);

	for (i = 0; i < n; ++i)
		cin >> vInt[i];

	for (i = 1; i < n; ++i)
	{
		temp = vInt[i];
		for (j = i - 1; j >= 0; --j)
		{
			if (vInt[j] > temp)
			{
				vInt[j + 1] = vInt[j];
			}
			else break;
		}
		vInt[j + 1] = temp;
	}

	for (i = 0; i < n; ++i)
		cout << vInt[i] << " ";

	return 0;
}
