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
        for (auto i = nums.begin(); i != nums.end(); ++i)
        {
            if (*i == number)
                return true;
        }
        return false;
    }
    // find small number in the array
    int FindSmallNumbers(vector<int> &nums)
    {
        int small = nums[0];
        for (auto i = nums.begin(); i != nums.end(); ++i)
        {
            if (*i < small)
                small = *i;
        }
        return small;
    }

    int firstMissingPositive(vector<int> &nums)
    {
        // if the values of the Array Negative or not

        for (auto i = nums.begin(); i != nums.end(); ++i)
        {
            if (*i >= 0)
                continue;
            else
                this->arrayIsNegative = true;
        }

        // there is a Negative value in the Array
        if (this->arrayIsNegative == true)
        {
            vector<int> posArray;

            for (auto i = nums.begin(); i != nums.end(); ++i)
            {
                if (*i >= 0)
                {
                    posArray.push_back(*i);
                }
                else
                    continue;
            }
            for (int i = FindSmallNumbers(posArray) + 1;; i++)
            {
                if (FindNumbers(posArray, i) == true)
                    continue;
                else
                    return i;
            }
        }
        else
        {
            int j = 1, res = 1;

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
    nums.push_back(1);
    nums.push_back(8);
    nums.push_back(9);
    nums.push_back(11);
    nums.push_back(12);
    Solution s1;
    cout << s1.firstMissingPositive(nums) << endl;
    return 0;
}