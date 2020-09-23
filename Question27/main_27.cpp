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
	// 2 6번, 3 1번, 5 1번
	
	// 3
	// 3 1번

	// 4
	// 2 2번

	// 2로 나누고,, 안 나눠지면 쁠쁠
	// 나머지가 1일 때까지 while문

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