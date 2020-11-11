#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  // map is based on a balanced binary tree
  // accessing elements takes O(logn) time
  map<string, int> m;
  m["monkey"] = 4;
  m["banana"] = 3;
  m["harpsichord"] = 9;
  cout << m["banana"] << "\n"; // 3

  // unordered_map uses hashing
  // accessing elements takes O(1) time on average

  // if value does not exist, then 0 value is added to that key in map.
  map<string, int> m;
  cout << m["aybabtu"] << "\n"; // 0

  // check is key exist
  if (m.count("aybabtu"))
  {
    // key exists
  }

  // print all the keys of map
  for (auto x : m)
  {
    cout << x.first << " " << x.second << "\n";
  }

  return 0;
}