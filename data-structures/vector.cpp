#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> v;
  v.push_back(3); // [3]
  v.push_back(2); // [3,2]
  v.push_back(5); // [3,2,5]
  v.push_back(6); // [3,2,5,6]
  v.pop_back();   // [3,2,5]

  // Iterate over vector
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << "\n";
  }

  // Shorter way to iterate
  for (auto x : v)
  {
    cout << x << "\n";
  }

  // Create vector with five elements
  vector<int> v = {2, 4, 2, 5, 1};

  // size 10, initial value 0
  vector<int> v(10);

  // size 10, initial value 5
  vector<int> v(10, 5);

  return 0;
}