#include <iostream>
#include <string>
using namespace std;

const int MIN_INT_32 = -2147483648;
const int MAX_INT_32 = 2147483647;

int reverse_int(int num)
{
    long int rev_num = 0;
    while (num != 0)
    {
        if (num < MIN_INT_32 || num > MAX_INT_32)
        {
            return 0;
        }

        int remain = num % 10;
        rev_num = rev_num * 10 + remain;
        num /= 10;
    }
    if (rev_num < MIN_INT_32 || rev_num > MAX_INT_32)
    {
        return 0;
    }
    else
    {
        return rev_num;
    }
};

int main()
{
    int num, result;
    cin >> num;

    result = reverse_int(num);

    cout << result << endl;

    return 0;
}