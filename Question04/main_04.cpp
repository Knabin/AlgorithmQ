#include <iostream>
using namespace std;

int main()
{
	// �ʱ�ȭ ��: max=-2147000000, min=2147000000
	// ������ ������ �־����� �ʾұ� ������ �̷��� ó���ϴ� ���� �ξ� ���� �� ����!!
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