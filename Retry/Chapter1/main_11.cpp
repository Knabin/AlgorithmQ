#include <iostream>
using namespace std;

int main()
{
    int n, tmp, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        tmp = i;

        while (tmp > 0)
        {
            sum++;
            tmp /= 10;
        }
    }

    cout << sum;

	return 0;
}