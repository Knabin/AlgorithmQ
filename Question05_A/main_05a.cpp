#include <iostream>
using namespace std;

int main()
{
	char a[20];
	int year, age;
	scanf_s("%s", &a, 20);
	// 'A'(65) ~ 'Z'(90)
	// 'a'(97) ~ 'z'(122)
	// '0'(48) ~ '9'(57)
	if (a[7] == '1' || a[7] == '2')
		year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	else year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));
	age = 2019 - year + 1;
	printf("%d ", age);
	if (a[7] == '1' || a[7] == '3')
		printf("M\n");
	else printf("W\n");

	return 0;
}