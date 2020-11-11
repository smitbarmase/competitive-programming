#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  // Using iterators with STL functions
  vector<int> v(10);
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  random_shuffle(v.begin(), v.end());

  // STL functions can be used with normal arrays.
  int a[] = {3, 4, 5, 6, 1, 8};
  int n = sizeof(a) / sizeof(a[0]);

  sort(a, a + n);
  reverse(a, a + n);
  random_shuffle(a, a + n);

  return 0;
}