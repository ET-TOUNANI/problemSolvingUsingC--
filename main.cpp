#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    bool witness = false;

public:
    bool isPolindrom(string s)
    {
        for (int i = 0, j = s.length() - 1; i < s.length(); i++, j--)
        {
            if (s[i] != s[j])
            {
                this->witness = true;
            }
        }

        return this->witness;
    }
    string longestPalindrome(string s)
    {
        vector<string> list;
        for (int i = 1; i < s.length(); i++)
        {
            for (int j = 0; j < s.length(); j++)
            {

                list.push_back(s.substr(j, i));
            }
        }
        int max = list[0].length();
        int ind = 0;
        for (int i = 0; i < list.size(); i++)
        {
            if (isPolindrom(list[i]) == false)
            {
                if (max < list[i].length())
                {
                    max = list[i].length();
                    ind = i;
                }
            }
        }
        return list[ind];
    }
};

int main()
{

    Solution s1;
    string s = "aacabdkacaa";
    string rs = s1.longestPalindrome(s);
    // if (s1.isPolindrom(rs) == true)
    // {
    //     cout << "not palindromic " << endl;
    // }
    // else
    cout << rs << endl;
}