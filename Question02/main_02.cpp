#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int sum = 0;
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		sum += i;
		if (i == a)
		{
			cout << i;
			continue;
		}
		cout << " + " << i;
	}
	cout << " = " << sum;

	return 0;
}