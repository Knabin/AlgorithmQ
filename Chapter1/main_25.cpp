#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, i, j, num = 0;

	cin >> n;
	vector<int> vScore(n);
	vector<int> vResult(n);

	for (i = 0; i < n; ++i)
	{
		cin >> vScore[i];
		vResult[i] = 1;
	}

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (vScore[i] < vScore[j])
				++vResult[i];
		}
		cout << vResult[i] << " ";
	}
	
	return 0;
}