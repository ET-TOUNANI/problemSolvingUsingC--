#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    bool arrayIsNegative = false;

public:
    // find number in the array
    bool FindNumbers(vector<int> &nums, int number)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == number)
                return true;
        }
        return false;
    }

    int firstMissingPositive(vector<int> &nums)
    {
        // if the values of the Array Negative or not

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
                continue;
            else
                this->arrayIsNegative = true;
        }
        // there is a Negative value in the Array
        if (this->arrayIsNegative == true)
        {
        }
        else
        {
            int j = 0, res = 0;

        next:
            if (FindNumbers(nums, j++) == true)
            {
                res = j;
                goto next;
            }

            else
                return res;
        }
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    Solution s1;
    cout << s1.firstMissingPositive(nums) << endl;
    return 0;
}