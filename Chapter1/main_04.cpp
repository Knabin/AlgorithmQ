#include <iostream>
using namespace std;

int main()
{
	// 초기화 시: max=-2147000000, min=2147000000
	// 나이의 범위가 주어지지 않았기 때문에 이렇게 처리하는 것이 훨씬 좋을 것 같다!!
	//freopen("input.txt", "rt", stdin);
	int n, i, age, max = 2, min = 100;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> age;
		if (age > max) max = age;
		if (age < min) min = age;
	}
	cout << max - min;
	return 0;
}