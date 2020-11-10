#include <bits/stdc++.h>
using namespace std;

bool binary_search_1(int n, int array[], int x)
{
  int a = 0, b = n - 1;
  while (a <= b)
  {
    int k = (a + b) / 2;
    if (array[k] == x)
    {
      return true;
    }
    if (array[k] > x)
      b = k - 1;
    else
      a = k + 1;
  }
  return false;
}

bool binary_search_2(int n, int array[], int x)
{
  int k = 0;
  for (int b = n / 2; b >= 1; b /= 2)
  {
    while (k + b < n && array[k + b] <= x)
      k += b;
  }
  return (array[k] == x);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n = 6;
  int array[] = {2, 3, 4, 5, 6, 8};

  cout << (binary_search_1(n, array, 4) ? "Found" : "Not Found") << endl;

  cout << (binary_search_2(n, array, 4) ? "Found" : "Not Found") << endl;

  return 0;
}