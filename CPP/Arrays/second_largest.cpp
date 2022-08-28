#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 7, 2, 4, 5, 6, 7};
    int max1 = 0;
    int max2 = 0;
    int min1 = 0;
    int min2 = 0;
    int len = nums.size();
    int x = 0;
    for (int i = 0; i < len; i++)
    {
        if (nums[i] > max1)
        {
            max1 = nums[i];
            x = i;
        }
    }
    cout << max1 << endl;

    for (int i = 0; i < len; i++)
    {
        if (nums[i] > max2 && nums[i] <= max1 && i != x)
        {
            max2 = nums[i];
        }
    }
    cout << "max2: " << max2 << endl;

    return 0;
}
