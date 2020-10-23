#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int n, a;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = fib(i);
        cout << a << " ";
    }
    return 0;
}
int fib(int m)
{
    if (m == 1)
    {
        return 0;
    }
    else if (m == 2)
    {
        return 1;
    }
    else
    {
        return fib(m - 1) + fib(m - 2);
    }

}