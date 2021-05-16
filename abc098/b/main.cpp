#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  for (int i = 1; i < n; ++i)
  {
    int both = 0;
    map<char, int> m;
    for (int r = 0; r < i; ++r)
    {
      if (m.find(s[r]) == m.end())
      {
        m[s[r]] = 0;
      }
    }
    for (int l = i; l < n; ++l)
    {
      if (m.find(s[l]) != m.end())
      {
        m[s[l]] = 1;
      }
    }
    for (auto &[k, v] : m)
    {
      if (v > 0)
        ++both;
    }
    ans = max(ans, both);
  }
  cout << ans << endl;
}