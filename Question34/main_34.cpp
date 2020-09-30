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

	for (i = n - 1; i >= 0; --i)
	{
		for(j = 0; j < i; ++j)
		{
			if(vInt[j] > vInt[j+1])
			{
				temp = vInt[j];
				vInt[j] = vInt[j + 1];
				vInt[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < n; ++i)
		cout << vInt[i] << " ";

	return 0;
}
