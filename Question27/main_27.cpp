#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, i, flag, a, b;

	cin >> n;
	// 5
	// 5 4 3 2 1
	// 2 6��, 3 1��, 5 1��
	
	// 3
	// 3 1��

	// 4
	// 2 2��

	// 2�� ������,, �� �������� �ܻ�
	// �������� 1�� ������ while��

	cout << n << "! = ";

	for (i = n; i >= 1; --i)
	{
		flag = 2;
		a = b = i;

		while (a != 0)
		{
			a = b / flag;	// 2
			b = b % flag;	// 1
			cout << a << " ";
			++flag;
		}
	}


	return 0;
}