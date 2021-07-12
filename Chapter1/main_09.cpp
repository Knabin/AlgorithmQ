#include <iostream>
using namespace std;

int main()
{
	int num, i, j;
	cin >> num;

	for (i = 1; i <= num; i++)
	{
		int count = 0;

		for (j = 1; j <= i / 2; j++)
		{
			if (i % j == 0) count++;
		}
		count += 1;
		cout << count << ' ';

	}

	return 0;
}
