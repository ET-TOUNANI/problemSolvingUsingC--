#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, S, P, Q, sol;
    cin >> N >> S >> P >> Q;
    vector<int> a;
    int r = pow(2, 31);
    a.push_back(S % r);

    for (int i = 1; i <= N - 1; i++)
    {
        sol = a[i - 1] * P + Q % r;
        if (sol != a[i - 1])
            a.push_back(sol);
    }

    cout << a.size() << endl;
    return 0;
}