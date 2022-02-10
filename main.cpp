#include <iostream>
#include <string>
using namespace std;

typedef struct result
{
    int index;
    int size;
} result;

class Solution
{
public:
    bool witness = false;

public:
    string ReturnString(string s, result res)
    {
        string g = "";
        for (int i = res.index; i <= res.size; i++)
        {
            g += s[i];
        }

        return g;
    }
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
        result res;
        res.size = 0;
        res.index = 0;
        if (s.length() <= 2)
        {
            if (isPolindrom(s) == false)
                return s;
            else
            {
                string g = "";
                g += s[0];
                return g;
            }
        }
        else
        {
            for (int j = 2; j < s.length(); j++)
            {
                for (int i = 0; i < s.length() - j; i++)
                {
                    if (s[i] == s[i + j])
                    {
                        result res2;
                        res2.index = i;
                        res2.size = i + j;
                        // "aacabdkacaa"
                        if (isPolindrom(ReturnString(s, res2)) == false)
                        {
                            res.index = res2.index;
                            res.size = res2.size;
                        }
                        // cout << res.index << "     --    " << res.size << endl;
                    }
                }
            }
            if (!res.size)
            {
                for (int i = 0; i < s.length() - 1; i++)
                {
                    if (s[i] == s[i + 1])
                    {
                        res.index = i;
                        res.size = i + 1;
                    }
                }
            }

            return ReturnString(s, res);
        }
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