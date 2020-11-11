#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  // important property of sets is that all their elements are distinct.

  // set is based on a balanced binary tree
  // its operations work in O(logn) time
  set<int> s;
  s.insert(3);
  s.insert(2);
  s.insert(5);
  cout << s.count(3) << "\n"; // 1
  cout << s.count(4) << "\n"; // 0
  s.erase(3);
  s.insert(4);
  cout << s.count(3) << "\n"; // 0
  cout << s.count(4) << "\n"; // 1

  for (auto x : s)
  {
    cout << x << "\n";
  }

  // unordered_set uses hashing
  // its operations work in O(1) time on average
  unordered_set<int> us;
  us.insert(3);
  us.insert(2);
  us.insert(5);
  us.insert(4);

  return 0;
}