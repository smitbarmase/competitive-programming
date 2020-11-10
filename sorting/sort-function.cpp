#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  // Sorting vector
  vector<int> v = {4, 2, 5, 3, 5, 8, 3};
  sort(v.begin(), v.end());
  sort(v.rbegin(), v.rend());

  // Sorting array
  int n = 7;
  int a[] = {4, 2, 5, 3, 5, 8, 3};
  sort(a, a + n);

  // Sorting string
  string s = "monkey";
  sort(s.begin(), s.end());

  // Sorting vector of pair
  vector<pair<int, int>> p;
  p.push_back({1, 5});
  p.push_back({2, 3});
  p.push_back({1, 2});
  sort(p.begin(), p.end());

  // Sorting vector of tuple
  vector<tuple<int, int, int>> t;
  t.push_back({2, 1, 4});
  t.push_back({1, 5, 3});
  t.push_back({2, 1, 3});
  sort(t.begin(), t.end());

  return 0;
}