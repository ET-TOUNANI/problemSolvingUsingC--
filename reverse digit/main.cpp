
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseDigit(int x)
{
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

    for (int i = 0; i < ; i++)
    {
    }
}