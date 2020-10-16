#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vInt;
vector<int> vTemp;

void divide(int left, int right)
{
	int mid;
	int p1, p2, p3;

	if (left < right)
	{
		mid = (left + right) / 2;
		divide(left, mid);
		divide(mid + 1, right);

		p1 = left;
		p2 = mid + 1;
		p3 = left;

		while (p1 <= mid && p2 <= right)
		{
			if (vInt[p1] < vInt[p2]) vTemp[p3++] = vInt[p1++];
			else vTemp[p3++] = vInt[p2++];
		}
		while (p1 <= mid) vTemp[p3++] = vInt[p1++];
		while (p2 <= right) vTemp[p3++] = vInt[p2++];
		for (int i = left; i <= right; ++i)
		{
			vInt[i] = vTemp[i];
		}
	}
}

int main(void)
{
	int n, i;
	cin >> n;

	vInt.resize(n);
	vTemp.resize(n);

	for (i = 0; i < n; ++i)
		cin >> vInt[i];

	divide(0, n - 1);

	for (i = 0; i < n; ++i)
		cout << vInt[i] << " ";

	return 0;
}