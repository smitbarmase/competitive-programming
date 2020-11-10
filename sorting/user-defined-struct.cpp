#include <bits/stdc++.h>
using namespace std;

struct P
{
  int x, y;
  bool operator<(const P &p)
  {
    if (x != p.x)
      return x < p.x;
    else
      return y < p.y;
  }
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  P p1, p2;

  p1.x = 2;
  p1.y = 3;

  p2.x = 2;
  p2.y = 4;

  cout << (p1 < p2);

  return 0;
}