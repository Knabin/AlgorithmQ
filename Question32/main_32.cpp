#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, temp, idx;
	cin >> n;
	vector<int> vInt(n);

	for (int i = 0; i < n; ++i)
		cin >> vInt[i];

	for (int i = 0; i < n; ++i)
	{
		idx = i;
		for(int j = i + 1; j < n; ++j)
		{
			/*if(vInt[i] > vInt[j])
			{
				temp = vInt[i];
				vInt[i] = vInt[j];
				vInt[j] = temp;
			}*/
			if (vInt[j] < vInt[idx]) idx = j;
		}
		// ���� ���� ���� swap ó��
		temp = vInt[i];
		vInt[i] = vInt[idx];
		vInt[idx] = temp;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << vInt[i] << " ";
	}
	
	return 0;
}