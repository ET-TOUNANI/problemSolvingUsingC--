
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*vector<int>*/ int reverseDigit(int x)
{
    /*    ----------- First solution
    vector<int> result;
    while (x >= 1)
    {
        result.push_back(x % 10);
        x = x / 10;
    }
    return result;

    /* best solution */
    int digit = 0;
    int reversed = 0;
    while (x >= 1)
    {
        digit = x % 10;
        x = x / 10;
        reversed = reversed * 10 + digit;
    }
    return reversed;
}

int main()
{
    int x = 123;
    /*vector<int> res = reverseDigit(x);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
    */
    cout << reverseDigit(x) << endl;
}