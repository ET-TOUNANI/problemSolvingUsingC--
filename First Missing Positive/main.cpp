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
            if (nums[i] > 0)
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
        }
    }
};