#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vInt;
    int n, i, j;
    cin >> n;
    vInt.resize(n + 1);

    for (i = 1; i <= n; ++i)
    {
        for (j = i; j <= n; j += i)
        {
            ++vInt[j];
        }
    }

    for (i = 1; i <= n; ++i)
    {
        cout << vInt[i] << " ";
    }

	return 0;
}