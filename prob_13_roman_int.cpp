#include <iostream>

#include <string>
using namespace std;

int RomanToInt(char c)
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

    int len = str.length(), sum = 0;
    for (int i = 0; i < len; i++)
    {
        int current = RomanToInt(str[i]);
        int next = (i + 1 < len) ? RomanToInt(str[i + 1]) : 0;

        if(current < next){
            sum -= current;
        }else{
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