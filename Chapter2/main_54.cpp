#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(void)
{
	int i, flag = 0;
	char c[31];
	cin >> c;

	stack<char> st;

	for (i = 0; c[i] != '\0'; ++i)
	{
		if (c[i] == '(') st.push(c[i]);
		else
		{
			if (st.empty())
			{
				cout << "NO" << endl;
				return 0;
			}
			else st.pop();
		}
	}

	cout << (st.size() == 0 ? "YES" : "NO") << endl;


	return 0;
}
