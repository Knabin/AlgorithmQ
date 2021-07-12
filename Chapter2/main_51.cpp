#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int h, w, i, j, sum, max = -2147000000;
	cin >> h >> w;

	vector<vector<int>> a(h + 1, vector<int>(w + 1));
	vector<vector<int>> dy(h + 1, vector<int>(w + 1));

	for (i = 1; i <= h; ++i)
	{
		for (j = 1; j <= w; ++j)
		{
			cin >> a[i][j];
			dy[i][j] = dy[i][j-1] + dy[i-1][j] - dy[i-1][j-1] + a[i][j];
		}
	}

	int hh, ww, tmp;
	cin >> hh >> ww;

	for (i = hh; i <= h; ++i)
	{
		for (j = ww; j <= w; ++j)
		{
			tmp = dy[i][j] - dy[i - hh][j] - dy[i][j - ww] + dy[i - hh][j - ww];
			if (max < tmp) max = tmp;
		}
	}

	cout << max << endl;

	return 0;
}
