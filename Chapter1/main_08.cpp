#include <iostream>

using namespace std;

bool check(char * c)
{
	int count = 0;
	for (int i = 0; c[i] != '\0'; ++i)
	{
		if (c[0] == ')' || (c[i+1] == '\0' && c[i] == '(')) return false;
		if (c[i] == '(') count++;
		else if (c[i] == ')') count--;
		// if (count < 0) break;
	}
	if (count == 0) return true;
	return false;
}

int main()
{
	char c[31];
	cin >> c;

	cout << (check(c) ? "YES" : "NO");

	return 0;
}
