#include <iostream>
using namespace std;

int digit_sum(int x)
{
	int sum = 0;
	for (int i = 1; i <= x; i *= 10)
	{
		sum += (x % (i * 10)) / i;
	}
	return sum;
}

int main()
{
	int a[100];
	int n, i;
	int max = 0, max_n = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n; i++)
	{
		int t = digit_sum(a[i]);
		if (t > max || (t == max && a[i] > max_n))
		{
			max = t;
			max_n = a[i];
		}
	}
	cout << max_n << '\n';

	return 0;
}
