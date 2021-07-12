#include <iostream>
using namespace std;

int main()
{
	int a, b, year, gender, result;
	scanf_s("%d-%d", &a, &b);

	year = a / 10000;
	gender = b / 1000000;
	char c = gender % 2 == 0 ? 'W' : 'M';

	result = 20 - year + (gender < 3 ? 100 : 0);

	cout << result << " " << c;

	return 0;
}