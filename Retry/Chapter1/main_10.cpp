#include <iostream>
using namespace std;

int digit_sum(int x)
{
    int res = 0;

    while (x > 0)
    {
        res += x % 10;
        x /= 10;
    }

    return res;
}

int main()
{
    int n, i, tmp, num, max = -2147000000;
    cin >> n;

    for (i = 0; i < n; ++i)
    {
        cin >> tmp;
        auto sum = digit_sum(tmp);

        if (sum > max)
        {
            max = sum;
            num = tmp;
        }
        else if (sum == max)
        {
            num = num > tmp ? num : tmp;
        }
    }

    cout << num;

	return 0;
}