#include <bits/stdc++.h>
using namespace std;

void bubble(int n, int array[])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        swap(array[j], array[j + 1]);
      }
    }
  }
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

  bubble(n, array);

  for (int i = 0; i < n; i++)
    cout << array[i] << " ";

  return 0;
}