//sum of first n numbers using recursion
#include<iostream>

using namespace std;

int sum(int);
int main()
{
    int num;
    cout << "Enter n : ";
    cin >> num;
    cout << "Sum : "<< sum(num);
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
        {
            return n+sum(n-1);
        }
}