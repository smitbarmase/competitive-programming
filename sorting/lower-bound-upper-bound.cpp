#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int array[] = {2, 3, 4, 5, 5, 6, 6, 7, 7, 8};
  int n = sizeof(array) / sizeof(array[0]);

  int x = 6;

  // Search element
  auto k = lower_bound(array, array + n, x) - array;
  if (k < n && array[k] == x)
  {
    cout << "Found";
  }

  // Count number of elements
  auto a = lower_bound(array, array + n, x);
  auto b = upper_bound(array, array + n, x);
  cout << b - a << "\n";

  // Shorter code for counting number of elements
  auto r = equal_range(array, array + n, x);
  cout << r.second - r.first << "\n";

  return 0;
}