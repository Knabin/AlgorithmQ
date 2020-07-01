#include <iostream>
using namespace std;

int reverse(int x)
{
	int res = 0, tmp;
	while (x > 0)
	{
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}

bool isPrime(int x)
{
	int i;
	if (x == 1) return false;
	for (i = 2; i <= x / 2; ++i)
	{
		if (x % i == 0) return false;
	}
	return true;
}

int main()
{
	int n, i, num, temp;

	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cin >> num;
		temp = reverse(num);
		if (isPrime(temp)) cout << temp << " ";
	}

	return 0;
}
