#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char c[51];
	int i, idx = 0, num = 0, cnt = 0;
	int n[8]{ 0 };
	cin >> c;

	for (i = 0; i < 50; i++)
	{
		if (idx == 0 && c[i] == 48) continue;
		if (c[i] >= 48 && c[i] <= 56)
			n[idx++] = c[i] - 48;
	}

	for (i = 0; i < idx; i++)
		num += n[i] * pow(10, idx - 1 - i);

	for (i = 1; i <= num; i++)
		if (num % i == 0) cnt++;

	cout << num << endl << cnt;

	return 0;
}