#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, i, j, temp;
	cin >> n;
	vector<int> is(n);
	vector<int> os(n);

	for (i = 0; i < n; ++i)
		cin >> is[i];

	os[n - 1] = n;

	for (i = n - 2; i >= 0; --i)
	{
		temp = i + 1;

		for (j = 0; j < is[i]; ++j)
		{
			os[i + j] = os[i + j + 1];
		}
		os[i + j] = temp;
	}

	for (i = 0; i < n; ++i)
		cout << os[i] << " ";


	return 0;
}
