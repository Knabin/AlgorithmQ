#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, k, tmp, i;
	cin >> n >> k;

	stack<char> sChar;

	char arr[100];
	int top = -1;
	
	char c[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

	tmp = n;

	while (tmp != 0)
	{
		sChar.push(c[tmp % k]);
		tmp /= k;
	}

	while (!sChar.empty())
	{
		cout << sChar.top();
		sChar.pop();
	}


	return 0;
}
