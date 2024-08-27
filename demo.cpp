#include <iostream>
#include <string>
using namespace std;

int romanToInt(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}

int isRomanInt(string str)
{
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int current = romanToInt(str[i]);
        cout << "current = " << current << endl;
        int next = (i + 1 < str.length()) ? romanToInt(str[i + 1]) : 0;

        cout << "next = " << next << endl;
        if (current < next)
        {
            sum -= current;
        }
        else
        {
            sum += current;
        }
    }
    return sum;
}

int main()
{
    string str;
    cin >> str;
    cout << isRomanInt(str) << endl;
    return 0;
}
