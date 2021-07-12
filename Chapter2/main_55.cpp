#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m, i, idx = 0;
	cin >> n;

	stack<int> st;
	vector<int> vt(n);
	vector<int> vt2(n);
	vector<char> vtc;

	for (i = 0; i < n; ++i)
	{
		vt[i] = i + 1;
	}
	// 2 1 3

	for (i = 0; i < n; ++i)
	{
		cin >> vt2[i];

		st.push(vt2[i]);
		vtc.push_back('P');

		while (true)
		{
			if (st.empty()) break;
			if (st.top() == vt[idx])
			{
				st.pop();
				vtc.push_back('O');
				++idx;
			}
			else break;
		}
	}

	if (!st.empty()) cout << "impossible" << endl;
	else
	{
		for (i = 0; i < vtc.size(); ++i)
			cout << vtc[i];
	}



	return 0;
}
