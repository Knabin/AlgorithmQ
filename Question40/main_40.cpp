#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m, i, p1 = 0, p2 = 0, p3 = 0;
	cin >> n;
	vector<int> vN(n);
	for (i = 0; i < n; ++i)
		cin >> vN[i];
	sort(vN.begin(), vN.end());

	cin >> m;
	vector<int> vM(m);
	for (i = 0; i < m; ++i)
		cin >> vM[i];
	sort(vM.begin(), vM.end());

	vector<int> vResult(n+m);

	while (p1 < n && p2 < m)
	{
		if (vN[p1] < vM[p2]) ++p1;
		else if (vN[p1] > vM[p2]) ++p2;
		else
		{
			vResult[p3++] = vN[p1];
			++p1; ++p2;
		}
	}

	for (i = 0; i < p3; ++i)
		cout << vResult[i] << " ";

	return 0;
}
