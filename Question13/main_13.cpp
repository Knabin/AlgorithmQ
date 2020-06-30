#include <iostream>
using namespace std;

int main()
{
	int ch[10];
	int i, max = -2147000000, res = -1;
	char a[101];
	cin >> a;

	for (int i = 0; a[i] != '\0'; ++i)
	{
		int idx = a[i] - 48;
		ch[idx]++;
		if (ch[idx] == max && idx > res) res = idx;
		else if (ch[idx] > max)
		{
			res = idx;
			max = ch[idx];
		}
	}
	/*
	for (int i = 0; i <= 9; ++i)
	{
		if (ch[i] > max)
		{
			max = ch[i];
			res = i;
		}
	}*/

	cout << res;

	return 0;
}
