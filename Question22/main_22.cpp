#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n, k, i, t, sum = 0, max = -2147000000;
	cin >> n >> k;

	vector<int> vInt(n);

	for (i = 0; i < n; i++)
	{
		cin >> t;
		vInt.push_back(t);
	}

	for (i = 0; i < k; ++i)
	{
		sum += vInt[i];
	}

	max = sum;
	
	for (i = k; i < n; ++i)
	{
		sum -= vInt[i - k];
		sum += vInt[i];
		if (sum > max) max = sum;
	}

	cout << max << endl;

	return 0;
}
