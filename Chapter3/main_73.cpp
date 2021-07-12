#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(void)
{
	int input;
	priority_queue<int> PQ;

	while (true)
	{
		cin >> input;
		if (input == -1)
			break;
		else if (input == 0)
		{
			if (PQ.empty()) cout << -1 << endl;
			else
			{
				cout << PQ.top() << endl;
				PQ.pop();
			}
		}
		else
			PQ.push(input);
	}

	return 0;
}