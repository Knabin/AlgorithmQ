#include <iostream>
using namespace std;

int main()
{
	int n[50001] = { 0 };
	int num, i, j;
	cin >> num;

	for (i = 1; i <= num; i++)
	{
		for (j = i; j <= num; j += i)
		{
			n[j]++;
		}
	}

	for (i = 1; i <= num; i++)
		cout << n[i] << " ";

	return 0;
}
