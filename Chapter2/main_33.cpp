#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, idx, temp, min = 2147000000, cnt = 0;
	cin >> n;
	vector<int> vInt(n);

	for (int i = 0; i < n; ++i)
		cin >> vInt[i];

	for (int i = 0; i < n - 1; ++i)
	{
		idx = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (vInt[j] > vInt[idx]) idx = j;
		}
		temp = vInt[i];
		vInt[i] = vInt[idx];
		vInt[idx] = temp;
	}

	for (int i = 0; i < n; ++i)
	{
		if(min > vInt[i])
		{
			min = vInt[i];
			if(++cnt == 3)
			{
				cout << vInt[i] << endl;
				break;
			}
		}
	}
	
	return 0;
}
