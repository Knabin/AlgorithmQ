#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m, i, j;
	
	cin >> n;
	vector<int> vN(n);
	
	for (i = 0; i < n; ++i)
		cin >> vN[i];

	cin >> m;
	vector<int> vM(m);

	vector<int> vAnswer;
	vAnswer.resize(n + m);
	
	for (i = 0; i < m; ++i)
		cin >> vM[i];

	i = j = 0;

	while (true)
	{
		if (vN[i] > vM[j])
		{
			vAnswer[i + j] = vM[j];
			++j;
		}
		else if (vN[i] < vM[j])
		{
			vAnswer[i + j] = vN[i];
			++i;
		}
		else
		{
			vAnswer[i + j] = vN[i];
			vAnswer[i + j + 1] = vM[j];
			++i; ++j;
		}

		if (i == n)
		{
			for (; j < m; ++j) vAnswer[i + j] = vM[j];
			break;
		}
		else if (j == m)
		{
			for (; i < n; ++i) vAnswer[i + j] = vN[i];
			break;
		}
	}

	for (i = 0; i < vAnswer.size(); ++i)
		cout << vAnswer[i] << " ";

	return 0;
}
