#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int i;
	char c[101];
	gets_s(c);

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == ' ') continue;
		if (c[i] >= 65 && c[i] <= 90)
			cout << static_cast<char>(c[i] + 32);
		else if (c[i] >= 97 && c[i] <= 122)
			cout << static_cast<char>(c[i]);
	}

	return 0;
}