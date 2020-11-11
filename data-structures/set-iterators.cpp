#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  set<int> s;

  // Iterator pointing smallest element.
  set<int>::iterator it = s.begin();

  // Shorter way to write this is
  auto it = s.begin();

  // You can access element with * symbol
  cout << *it << "\n";

  // Print all elements in increasing order.
  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << *it << "\n";
  }

  // Print largest element in set.
  auto it = s.end();
  it--;
  cout << *it << "\n";

  // To find elment in set
  int x;
  auto it = s.find(x);
  if (it == s.end())
  {
    // x is not found
  }

  return 0;
}