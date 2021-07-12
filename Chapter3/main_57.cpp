#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

void recur(int n)
{
	if (n == 0) return;
	else
	{
		recur(n / 2);
		cout << n % 2;
	}
}

int main(void)
{
	int n;
	cin >> n;

	recur(n);

	return 0;
}