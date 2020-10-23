#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int n, a;
    cin >> n;
    a = factorial(n);
    cout << a;
    return 0;
}
int factorial(int m)
{
    if (m == 0 || m == 1)
    {
        return 1;
    }
    else
    {
        return m * factorial(m - 1);
    }

}