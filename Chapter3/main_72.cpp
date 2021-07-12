#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(void)
{
	int n, k, i;
	cin >> n >> k;

	queue<int> Q;

	for (i = 1; i <= n; ++i)
	{
		Q.push(i);
	}

	while (!Q.empty())
	{
		for (i = 1; i < k; ++i)
		{
			Q.push(Q.front());
			Q.pop();
		}

		Q.pop();
		
		if (Q.size() == 1)
		{
			cout << Q.front() << endl;
			Q.pop();
		}
	}

	return 0;
}