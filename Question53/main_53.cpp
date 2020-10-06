#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, k, tmp, i;
	cin >> n >> k;

	char arr[100];
	int top = -1;
	
	char c[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

	tmp = n;

	while (tmp != 0)
	{
		arr[++top] = c[tmp % k];
		tmp /= k;
	}

	while (top > -1)
	{
		cout << arr[top--];
	}


	return 0;
}
