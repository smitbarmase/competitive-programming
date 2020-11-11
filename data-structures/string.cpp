#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string a = "hello";

  string b = a + a;
  cout << b << "\n"; // hellohello

  b[5] = 'b';
  cout << b << "\n"; // hellobello

  // substr(start index, length)
  string c = b.substr(3, 4);
  cout << c << "\n"; // lobe

  // Find position of substring
  int pos = b.find("ello");
  cout << pos << "\n";

  return 0;
}