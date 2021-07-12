#include <iostream>
using namespace std;

int main()
{
	// 대문자라면 65 빼기
	// 소문자라면 97 빼면 0부터 시작하는데, 알파벳이 26개니까 + 26 => 97 - 26 = 71
	char a[101], b[101];
	int check[52] = { 0 };
	int f;
	bool result = true;

	cin >> a >> b;

	for (int i = 0; a[i] != '\0' || b[i] != '\0'; ++i)
	{
		f = a[i] >= 97 ? 71 : 65;
		++check[a[i] - f];

		f = b[i] >= 97 ? 71 : 65;
		--check[b[i] - f];
	}

	for (int i = 0; i < 52; ++i)
	{
		if(check[i] == 0) continue;
		else
		{
			result = false;
			break;
		}
	}

	cout << (result ? "YES" : "NO") << endl;

	return 0;
}
