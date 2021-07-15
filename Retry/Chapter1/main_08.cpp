#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int i, res = 0;
    bool flag = false;
    cin >> input;

    for (i = 0; i < input.length(); ++i)
    {
        if (input[i] == '(') ++res;
        else --res;
        if (res < 0) 
        {
            break;
        }
    }

    if (res == 0) flag = true;

    cout << (flag ? "YES" : "NO");

	return 0;
}