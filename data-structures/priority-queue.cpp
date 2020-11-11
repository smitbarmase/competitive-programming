#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  priority_queue<int> q;
  q.push(3);
  q.push(5);
  q.push(7);
  q.push(2);
  cout << q.top() << "\n"; // 7
  q.pop();
  cout << q.top() << "\n"; // 5
  q.pop();
  q.push(6);
  cout << q.top() << "\n"; // 6
  q.pop();

  // Uses heap
  // By default, it gives largest element.

  // If we want smallest element to find and remove
  priority_queue<int, vector<int>, greater<int>> q;

  return 0;
}