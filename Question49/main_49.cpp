#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, temp, i, j, count = 0;
	cin >> n;
	vector<vector<int>> vInt;
	vector<int> vTemp;

	for (i = 0; i < n; ++i)
	{
		cin >> temp;
		vTemp.clear();
		for (j = 0; j < n; ++j)
		{
			vTemp.push_back(temp);
		}
		vInt.push_back(vTemp);
	}

	for (i = 0; i < n; ++i)
	{
		cin >> temp;
		for (j = 0; j < n; ++j)
		{
			if (vInt[j][i] > temp) vInt[j][i] = temp;
			count += vInt[j][i];
		}
	}

	cout << count << endl;

	return 0;
}
