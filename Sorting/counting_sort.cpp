#include <bits/stdc++.h>
using namespace std;

void counting_sort(int *a, int n)
{
	int largest = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		largest = max(largest, a[i]);
	}

	//int *freq = new int[largest + 1] {0};
	vector<int> freq(largest + 1, 0);

	for (int i = 0; i < n; i++)
	{
		freq[a[i]]++;
	}

	int j = 0;
	for (int i = 0; i <= largest; i++)
	{
		while (freq[i] > 0)
		{
			a[j] = i;
			freq[i]--;
			j++;
		}
	}
}

int main()
{
	int arr[] = {1, 5, 2, 9, 3, 1, 2, 5, 3, 1, 8, 9, 0, 0, 9};
	int n = sizeof(arr) / sizeof(int);
	counting_sort(arr, n);
	for (auto i : arr)
	{
		cout << i << " ";
	}
	return 0;
}
