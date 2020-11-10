#include <bits/stdc++.h>
using namespace std;

int algo_1(int n, int array[]) // O(n^3)
{
	int best = 0;
	for (int a = 0; a < n; a++)
	{
		for (int b = a; b < n; b++)
		{
			int sum = 0;
			for (int k = a; k <= b; k++)
			{
				sum += array[k];
			}
			best = max(best, sum);
		}
	}
	return best;
}

int algo_2(int n, int array[]) // O(n^2)
{
	int best = 0;
	for (int a = 0; a < n; a++)
	{
		int sum = 0;
		for (int b = a; b < n; b++)
		{
			sum += array[b];
			best = max(best, sum);
		}
	}
	return best;
}

int algo_3(int n, int array[]) // O(n)
{
	int best = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = max(array[i], sum + array[i]);
		best = max(best, sum);
	}
	return best;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int array[n];
	for (int i = 0; i < n; i++)
		cin >> array[i];
	cout << algo_1(n, array) << endl; // Good.
	cout << algo_2(n, array) << endl; // Better.
	cout << algo_3(n, array) << endl; // Best.
	return 0;
}