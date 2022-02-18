
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> reverseDigit(int x)
{
    /*    ----------- First solution */
    vector<int> result;
    while (x >= 1)
    {
        result.push_back(x % 10);
        x = x / 10;
    }
    return result;
}

int main()
{
    int x = 123;
    vector<int> res = reverseDigit(x);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
}