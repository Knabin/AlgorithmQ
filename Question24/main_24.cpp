#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, i, num, temp;
	bool result = true;

	cin >> n;
	num = n - 1;

	vector<int> vInt(n);		// 5
	vector<bool> vBool(num);	// 1 2 3 4

	for (i = 0; i < n; ++i)
	{
		cin >> vInt[i];
	}

	for (i = 0; i < n - 1; ++i)
	{
		temp = abs(vInt[i] - vInt[i + 1]);
		if (temp <= num && !vBool[temp-1])
		{
			vBool[temp - 1] = true;
		}
		else
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}