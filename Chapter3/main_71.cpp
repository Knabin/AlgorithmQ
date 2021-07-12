#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int ch[10001], d[3] = { -1, 1, 5 };

int main(void)
{
	int s, e, x, pos, i;
	cin >> s >> e;

	queue<int> Q;
	
	ch[s] = 1;
	Q.push(s);

	while (!Q.empty())
	{
		x = Q.front();
		Q.pop();

		for (int i = 0; i < 3; ++i)
		{
			pos = x + d[i];
			if(pos <= 0 || pos > 10000) continue;
			if (pos == e)
			{
				// 출발 지점을 1로 잡았기 때문에 이전 지점 출력
				cout << ch[x] << endl;
				return 0;
			}
			if (ch[pos] == 0)
			{
				ch[pos] = ch[x] + 1;
				Q.push(pos);
			}
		}
	}

	return 0;
}