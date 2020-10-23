#include<iostream>
using namespace std;
int path(int, int);
int main()
{
	int rows, col;
	cin >> rows;
	col = rows;
	cout << "ways : " << path(rows, col);
}
int path(int m, int n)
{
	if (n == 1 || m == 1)
		return 1;
	else
		return path(n, m - 1) + path(m, n - 1);

}