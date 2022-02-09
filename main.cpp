#include <iostream>
#include <string>
using namespace std;

typedef struct result
{
    int index;
    int size;
};

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
        result res;
        if (s.length() < 3)
        {
            return s;
        }
        else
        {
            for (int j = 3; j < s.length(); j++)
            {
                for (int i = 0; i < s.length() - 2; i++)
                {
                    if (s[i] == s[i + j])
                    {
                        res.index = i;
                        res.size = j;
                    }
                }
            }
        }
    }
};

int main()
{

    Solution s1;
    string s = "oho";
    if (s1.isPolindrom(s) == true)
    {
        cout << "not palindromic " << endl;
    }
    else
        cout << "palindromic " << endl;
}