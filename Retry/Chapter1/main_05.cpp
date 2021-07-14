#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    bool isWoman = false;
    int age = 20;
    cin >> input;

    if (input[7] >= '3')
    {
        if (input[7] == '3') isWoman = false;
        else isWoman = true;
    }
    else
    {
        if (input[7] == '1') isWoman = false;
        else isWoman = true;
        age += 100;
    }

    age -= ((input[0] - '0') * 10 + (input[1] - '0'));

    cout << age << " " << (isWoman ? "W" : "M");

	return 0;
}