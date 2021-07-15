#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int i, num = 0, cnt = 0;

    cin >> input;

    for (i = 0; i < input.length(); ++i)
    {
        if (input[i] >= '0' && input[i] <= '9')
        {
            num *= 10;
            num += (input[i] - '0');
        }
    }

    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0) cnt++;
    }

    cout << num << endl;
    cout << cnt;

	return 0;
}