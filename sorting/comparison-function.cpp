#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b)
{
  if (a.size() != b.size())
    return a.size() < b.size();
  return a < b;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<string> v = {"hello", "world", "yay", "yep"};

  sort(v.begin(), v.end(), comp);

  for (string s : v)
    cout << s << " ";

  return 0;
}