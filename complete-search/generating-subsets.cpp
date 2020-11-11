#include <bits/stdc++.h>
using namespace std;

int n = 3;
vector<int> subset;

void search(int k)
{
  if (k == n)
  {
    // process subset
    for (auto s : subset)
      cout << s << " ";
    cout << endl;
  }
  else
  {
    search(k + 1);
    subset.push_back(k);
    search(k + 1);
    subset.pop_back();
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  // Backtracking - Method 1
  search(0);

  // Bit Masking - Method 2

  for (int b = 0; b < (1 << n); b++)
  {
    subset.clear();
    for (int i = 0; i < n; i++)
    {
      if (b & (1 << i))
        subset.push_back(i);
    }
    for (auto s : subset)
    {
      cout << s << " ";
    }
    cout << endl;
  }

  return 0;
}