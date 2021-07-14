#include <iostream>
using namespace std;

int main()
{
    int a, b, i, res = 0;

    cin >> a >> b;

    for (i = a; i < b; ++i)
    {
        cout << i << " + ";
        res += i;
    }

    res += b;
    cout << b << " = " << res;

	return 0;
}