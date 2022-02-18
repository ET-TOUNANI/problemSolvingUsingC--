#include <iostream>
using namespace std;

int largestDigit(int x)
{
    int max = 0, digit;
    while (x >= 1)
    {
        digit = x % 10;
        x = x / 10;
        if (max < digit)
        {
            max = digit;
        }
    }
    return max;
}

int main()
{
    int x = 1293845;
    cout << largestDigit(x) << endl;
    return 0;
}