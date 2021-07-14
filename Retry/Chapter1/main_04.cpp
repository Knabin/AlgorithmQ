#include <iostream>
using namespace std;

int main()
{
    int n, i, tmp, min = 2147000000, max = -2147000000;
    cin >> n;

    for (i = 0; i < n; ++i)
    {
        cin >> tmp;
        if (tmp < min) min = tmp;
        if (tmp > max) max = tmp;
    }

    cout << max - min;

	return 0;
}