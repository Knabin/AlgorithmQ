#include <iostream>
using namespace std;

int main()
{
    int n, m, i, res = 0;
    cin >> n >> m;

    for (i = 1; i <= n; ++i)
    {
        if (i % m == 0) res += i;
    }

    cout << res;

	return 0;
}