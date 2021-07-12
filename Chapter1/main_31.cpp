#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	char c[10];
	int i, pos, a = 0, b = 0;
	
	cin >> c;

	// C가 한 개인 경우
	if(c[1] == 'H')
	{
		a = 1;
		pos = 1;
	}
	else
	{
		for(i = 1; c[i] != 'H'; ++i)
		{
			a = a * 10 + (c[i] - 48);
		}
		pos = i;
	}
	
	// H가 한 개인 경우
	if (c[pos + 1] == '\0') b = 1;
	else
	{
		for(i = pos+1; c[i] != '\0'; ++i)
		{
			b = b * 10 + (c[i] - 48);
		}
	}

	cout << a * 12 + b << endl;
	
	return 0;
}