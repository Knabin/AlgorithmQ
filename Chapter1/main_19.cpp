#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vStudent;
	
	int n, i, temp, m, cnt = 0;
	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cin >> temp;
		vStudent.push_back(temp);
	}

	m = vStudent[vStudent.size() - 1];

	for (i = vStudent.size() - 2; i >= 0; --i)
	{
		if (m < vStudent[i])
		{
			cnt++;
			m = vStudent[i];
		}
	}

	cout << cnt << endl;
	
	return 0;
}