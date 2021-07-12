#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

void D(int v)
{
	if (v > 7) return;
	else
	{
		cout << v << " ";
		D(v * 2);
		D(v * 2 + 1);
	}
}

int main(void)
{
	D(1);
}