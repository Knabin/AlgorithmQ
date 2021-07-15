#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int i;
    getline(cin, input);

    for (i = 0; i < input.length(); ++i)
    {
        if (input[i] == ' ') continue;
        if (input[i] >= 'a')
        {
            cout << static_cast<char>(input[i]);
        }
        else
        {
            cout << static_cast<char>(input[i] + ('a' - 'A'));
        }
    }

	return 0;
}