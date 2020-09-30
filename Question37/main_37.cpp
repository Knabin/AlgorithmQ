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
		// 현재 vSize에 있는지 체크, 해당 인덱스 가지고 있어야 함
		if(idx != 0)
		{
			// 맨앞으로 꺼내오기
			for (j = idx - 1; j >= 0; --j)
			{
				vSize[j + 1] = vSize[j];
			}
			vSize[j + 1] = temp;
		}
		// 없다면
		else
		{
			// 맨 앞에 추가하고 한칸씩 밀기
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
