#include <iostream>
using namespace std;

bool isPalindrom(int n)
{
    if (n >= 0)
    {
        int temp = n, remain;
        long int rev_int = 0;
        while (n != 0)
        {
            remain = n % 10;
            rev_int = rev_int * 10 + remain;
            n /= 10;
        }
        if (temp == rev_int)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cin >> num;
    if (isPalindrom(num))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}