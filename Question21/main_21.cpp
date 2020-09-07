#include <iostream>

using namespace std;

int main()
{
	int a[10], b[10], r[10];
	int i, ascore = 0, bscore = 0;

	for (i = 0; i < 10; ++i)
		cin >> a[i];

	for (i = 0; i < 10; ++i)
		cin >> b[i];

	for (i = 0; i < 10; ++i)
	{
		if (a[i] == b[i])
		{
			r[i] = 0;
			ascore++;
			bscore++;
		}
		else if (a[i] > b[i])
		{
			r[i] = 1;
			ascore += 3;
		}
		else
		{
			r[i] = -1;
			bscore += 3;
		}
	}

	cout << ascore << " " << bscore << endl;

	if (ascore != bscore)
		cout << (ascore > bscore ? "A" : "B");
	else
	{
		for (i = 9; i >= 0; --i)
		{
			if (r[i] == 0) continue;
			cout << (r[i] > 0 ? "A" : "B") << endl;
			return 0;
		}
		cout << "D" << endl;
	}

	cout << endl;

	return 0;
}
