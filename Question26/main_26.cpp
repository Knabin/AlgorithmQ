#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, i, j, num;

	cin >> n;
	vector<int> vNum(n);

	for (i = 0; i < n; ++i)
	{
		cin >> vNum[i];
		// �⺻�� 1, �տ��� ���鼭
		num = 1;

		for (j = 0; j < i; ++j)
			if (vNum[i] <= vNum[j]) ++num;

		cout << num << " ";

	}

	return 0;
}