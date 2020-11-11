#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  // Similar to vector
  // but also includes push_front and pop_front
  // slower than vector

  // average O(1) time fro adding and removing

  deque<int> d;
  d.push_back(5);  // [5]
  d.push_back(2);  // [5,2]
  d.push_front(3); // [3,5,2]
  d.pop_back();    // [3,5]
  d.pop_front();   // [5]

  return 0;
}