#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int target, start, mid, end, arr[] = {1, 3, 5, 6};
    cin >> target;

    // binary search algorithm
    vector<int> nums(arr, arr + 4);
    start = 0;
    end = nums.size() - 1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            cout << mid << endl;
            break;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << start << endl;
    return 0;
}
