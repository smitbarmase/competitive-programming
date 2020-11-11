#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  queue<int> q;
  q.push(3);
  q.push(2);
  q.push(5);
  cout << q.front(); // 3
  q.pop();
  cout << q.front(); // 2

  return 0;
}