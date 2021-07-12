#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int h, w, i, j, t;
	int height, width, max = -2147000000;
	int p1, p2;
	cin >> h >> w;

	vector<vector<int>> vInt;
	vector<int> temp;

	for (i = 0; i < h; ++i)
	{
		temp.clear();
		temp.resize(w);
		for (j = 0; j < w; ++j)
		{
			cin >> temp[j];
		}
		vInt.push_back(temp);
	}

	cin >> height >> width;
	
	for (i = 0; i <= h - height; ++i)
	{
		for (j = 0; j <= w - width; ++j)
		{
			p1 = 0;
			p2 = 0;
			t = 0;
			while (true)
			{
				if (p2 >= width)
				{
					++p1;
					p2 = 0;
				}
				if (p1 >= height) break;

				t += vInt[i + p1][j + p2];

				p2++;
			}
			if (max < t) max = t;
		}
	}

	cout << max << endl;

	return 0;
}
