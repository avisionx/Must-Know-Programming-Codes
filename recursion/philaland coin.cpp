#include <iostream>
#include <cmath>
using namespace std;
int num_coins(int max)
{
    if (max == 0)
        return 0;
    else
    {
        int a = int(log(max) / log(2) + 1);
        return a;
    }
}
int main()
{
    int T, max, result;
    cin >> T;
    while (T--)
    {
        cin >> max;
        result = num_coins(max);
        cout << result << endl;
    }
    return 0;
}
