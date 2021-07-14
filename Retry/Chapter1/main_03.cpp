#include <iostream>
using namespace std;

int main()
{
    int n, i, res = 1;
    cin >> n;
    cout << "1";
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0) 
        {
            cout << " + " << i;
            res += i;
        }
    }

    cout << " = " << res;

	return 0;
}