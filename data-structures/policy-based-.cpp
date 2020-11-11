#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    indexed_set;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  indexed_set s;
  s.insert(2);
  s.insert(3);
  s.insert(7);
  s.insert(9);

  // find_by_order returns an iterator to the element at a given position
  auto x = s.find_by_order(2);
  cout << *x << "\n"; // 7

  // order_of_key returns the position of a given element
  cout << s.order_of_key(7) << "\n"; // 2

  // If the element does not appear in the set,
  // we get the position that the element would have in the set
  cout << s.order_of_key(6) << "\n"; // 2
  cout << s.order_of_key(8) << "\n"; // 3

  return 0;
}