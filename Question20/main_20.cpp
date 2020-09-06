#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vA;
	int n, i, temp;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> temp;
		vA.push_back(temp);
	}

	for (i = 0; i < n; i++)
	{
		cin >> temp;

		switch (temp)
		{
		case 1:
			if (vA[i] == 3)
				cout << "B" << endl;
			else if (vA[i] == 1)
				cout << "D" << endl;
			else
				cout << "A" << endl;
			break;
		case 2:
			if (vA[i] == 1)
				cout << "B" << endl;
			else if (vA[i] == 2)
				cout << "D" << endl;
			else
				cout << "A" << endl;
			break;
		case 3:
			if (vA[i] == 2)
				cout << "B" << endl;
			else if (vA[i] == 3)
				cout << "D" << endl;
			else
				cout << "A" << endl;
			break;
		}
	}

	return 0;
}