#include <iostream>
#include <string>
using namespace std;

int main()
{
    int len, len2, target = 6, arr[] = {3, 2, 7, 4, 11, 15}, arr2[2] = {0};
    len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                arr2[0] = i;
                arr2[1] = j;
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << arr2[i];
        if (i < 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}