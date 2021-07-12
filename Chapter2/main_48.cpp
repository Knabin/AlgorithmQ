#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int arr[9][10] = { 0 };
	int num[9] = { 0 };
	int i, j, sum = 0;
	float temp;

	for (i = 0; i < 9; ++i)
	{
		temp = 0;
		for (j = 0; j < 9; ++j)
		{
			cin >> arr[i][j];
			temp += arr[i][j];
		}
		temp /= 9;
		if ((int)(temp * 10) % 10 >= 5) ++temp;
		arr[i][9] = temp;
	}

	for (i = 0; i < 9; ++i)
	{
		for (j = 0; j < 9; ++j)
		{
			if (abs(num[i] - arr[i][9]) > abs(arr[i][j] - arr[i][9]))
				num[i] = arr[i][j];
		}
		cout << arr[i][9] << " " << num[i] << endl;
	}


	return 0;
}
