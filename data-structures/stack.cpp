#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  stack<int> s;
  s.push(3);
  s.push(2);
  s.push(5);
  cout << s.top(); // 5
  s.pop();
  cout << s.top(); // 2

  return 0;
}