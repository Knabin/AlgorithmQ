#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int s, n, i, j, temp, idx;
	cin >> s;
	cin >> n;
	vector<int> vSize(s);
	vector<int> vNumber(n);

	for (i = 0; i < n; ++i)
	{
		cin >> vNumber[i];
		idx = 0;
		temp = 0;

		for (j = 0; j < s; ++j)
		{
			if (vNumber[i] != vSize[j]) continue;
			idx = j;
			temp = vSize[j];
			break;
		}
		// ���� vSize�� �ִ��� üũ, �ش� �ε��� ������ �־�� ��
		if(idx != 0)
		{
			// �Ǿ����� ��������
			for (j = idx - 1; j >= 0; --j)
			{
				vSize[j + 1] = vSize[j];
			}
			vSize[j + 1] = temp;
		}
		// ���ٸ�
		else
		{
			// �� �տ� �߰��ϰ� ��ĭ�� �б�
			for (j = s - 1; j > 0; --j)
			{
				vSize[j] = vSize[j - 1];
			}
			vSize[0] = vNumber[i];
		}
	}

	for (i = 0; i < s; ++i)
		cout << vSize[i] << " ";

	return 0;
}
